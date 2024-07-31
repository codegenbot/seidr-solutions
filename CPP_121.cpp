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
    
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            int num = (str[i] - '0') + ((i > 0 && str[i-1] == ' ') ? 10 : 0);
            lst.push_back(num);
        } else {
            break; 
        }
    }
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}