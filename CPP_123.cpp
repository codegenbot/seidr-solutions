```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
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
    assert(issame({get_odd_collatz(1)}, vector<int>({1})));
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> res = get_odd_collatz(num);
    cout << "The sequence of Collatz Conjecture for the number is: ";
    for (int i : res)
        cout << i << " ";
    return 0;
}