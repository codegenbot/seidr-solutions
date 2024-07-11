```cpp
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            count++;
        num /= 10;
    }
    result.push_back(count);
    result.push_back(abs(num));
    return result;
}

int main() {
    int n; 
    cin >> n; 

    auto [even, odd] = even_odd_count(n);

    cout << "Number of Even digits: " << even << endl;
    cout << "Absolute value of the remaining Number: " << odd << endl;

    return 0;
}