#include <vector>

vector<int> generate_integers(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> result = generate_integers(a, b);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

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