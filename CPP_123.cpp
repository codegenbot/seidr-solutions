```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({get_odd_collatz(12)}, std::vector<int>({1, 3, 5, 17, 20})));
    vector<int> temp;
    for(int i = 2; i <= 20; ++i){
        temp = get_odd_collatz(i);
        cout << "Sequence of Collatz Conjecture for " << i << ":";
        for(auto x:temp) {
            cout << " " << x;
        }
        cout << endl;
    }
}