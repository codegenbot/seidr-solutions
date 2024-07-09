#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaximum(vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        cout << maxNum << endl;
    return 0;
}

int main() {
    vector<int> numbers;
    int num = 0; 
    cout << "Enter numbers (separated by spaces): ";
    while(cin >> num) { 
        while(cin.peek() == ' ') {
            cin.ignore();
        }
        numbers.push_back(num);
        while(getline(cin, string())) ; 
    }
    findMaximum(numbers);
    return 0;
}