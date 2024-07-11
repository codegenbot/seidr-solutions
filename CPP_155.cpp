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
    vector<int> output = even_odd_count(0);  
    cout << "Even: " << output[0] << ", Odd: " << output[1] << endl;
    int num; 
    cin >> num;  
    output = even_odd_count(num);
    cout << "Even: " << output[0] << ", Odd: " << output[1] << endl;
}