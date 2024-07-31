```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    char c;
    for (; cin >> c && c != '\n';) {}
    cin.ignore(); 
    while (cin >> ws >> c) {
        if (c == ' ') break; 
        int num; cin >> num; lst.push_back(num);
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "Sum of odd numbers: " << sum << endl;
}