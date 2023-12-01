#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_integers(int a, int b);
bool issame(vector<int> a, vector<int> b);

int main() {
    // Example usage
    int a, b;
    cin >> a >> b;
    vector<int> integers = generate_integers(a, b);
    for (int num : integers) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> first = {1, 2, 3};
    vector<int> second = {1, 2, 3};
    bool same = issame(first, second);
    cout << (same ? "Same" : "Not Same") << endl;

    return 0;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}