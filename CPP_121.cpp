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
    
    int num = 0;
    bool inNum = false;
    for (char c : str) {
        if (!isdigit(c)) {
            inNum = false;
        } else if (inNum) {
            num = num * 10 + (c - '0');
        } else {
            inNum = true;
        }
        
        if (!inNum) {
            lst.push_back(num);
            num = 0;
        }
    }
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}