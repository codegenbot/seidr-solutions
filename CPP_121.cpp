```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> lst;
cout << "Enter numbers (space-separated): ";
string str;
getline(cin, str);
for (char c : str) {
    if (c == ' ') break; 
    lst.push_back(c - '0');
}
int sum = 0;
for (int i = 1; i < lst.size(); i++) {
    if (lst[i] % 2 != 0) {
        sum += lst[i];
    }
}
cout << "Sum of odd numbers: " << sum << endl;