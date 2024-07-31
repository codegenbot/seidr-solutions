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
            cout << "Invalid input. Please enter numbers only." << endl;
            return 1; 
        }
        try {
            int num =stoi(string(1,c));  
            if(num != 0 && num >= 1)
                lst.push_back(num);
            else {
                cout << "Invalid input. Please enter numbers only." << endl;
                return 1; 
            }
        } catch(invalid_argument& e) {
            cout << "Invalid input. Please enter numbers only." << endl;
            return 1; 
        }
    }
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}