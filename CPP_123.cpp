```cpp
#include <vector>
bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    cin >> n;

    vector<int> get_odd_collatz(int n) {
        vector<int> result;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            if (n % 2 != 0) {
                result.push_back(n);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }

    vector<int> output = get_odd_collatz(n);

    int m, k;
    cin >> m >> k;

    if(issame({m}, output)) {
        cout << "Yes\n";
    } else if(issame({k}, output)) {
        cout << "No\n";
    } else {
        cout << "Unknown\n";
    }

    return 0;
}