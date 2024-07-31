```cpp
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    return sum;
}

int main() {
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    string str;
    getline(cin, str);
    
    int n = 0;
    bool isNumber = false;
    for (char c : str) {
        if (isdigit(c)) {
            n = n * 10 + (c - '0');
            isNumber = true;
        } else if(isNumber){
            lst.push_back(n);
            n = 0;
            isNumber = false;
        }
    }
    if(isNumber)
        lst.push_back(n);
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}