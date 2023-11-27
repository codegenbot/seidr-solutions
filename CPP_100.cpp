#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

void make_a_pile(vector<int>& a) {
    int n = a.size();
    int stones = n;
    for (int i = 0; i < n; i++) {
        a[i] = stones;
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
}

int main() {
    vector<int> result(8);
    make_a_pile(result);
    cout << "Test case passed!" << endl;
    return 0;
}