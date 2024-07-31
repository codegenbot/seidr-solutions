```cpp
#include <iostream>
#include <vector>
#include <string>
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
    
    for (char c : str) {
        if (!isdigit(c)) {
            break; 
        }
        string numStr = "";
        while (c != ' ') {
            numStr += c;
            if ((str[str.find(c) + 1] >= '0' && str[str.find(c) + 1] <= '9')) {
                c = str[str.find(c) + 1];
            } else {
                break; 
            }
        }
        int num = stoi(numStr);
        lst.push_back(num);
    }
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}