```cpp
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count = 0;
    while(num != 0) {
        int digit = num % 10;
        if(digit % 2 == 0)
            count++;
        num /= 10;
    }
    result.push_back(count);
    result.push_back(abs(num));
    return result;
}

int main() {
    assert(abs(even_odd_count(0)[1] - 0) < 1);
    int num; 
    cin >> num;  
    vector<int> output = even_odd_count(num);  
    cout << "Even: " << output[0] << ", Odd: " << output[1] << endl;
}