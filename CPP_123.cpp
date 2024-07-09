```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

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

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> res = get_odd_collatz(num);
    for(int i=0; i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}