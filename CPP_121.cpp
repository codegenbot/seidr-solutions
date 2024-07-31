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
        if (isdigit(c)) {
            int num =stoi(string(1,c));  // This will work for single-digit integers
            lst.push_back(num);
        } else {
            break; 
        }
    }
    
    cout << "Sum of odd numbers: " << solve(lst) << endl;
    return 0;
}