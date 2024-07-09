```c++
#include <vector>
#include <iostream>

using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

int main() {
    vector<int> numbers;
    int threshold;
    
    cout << "Enter the threshold: ";
    cin >> threshold;
    
    cout << "Enter the numbers separated by space: ";
    for(int i=0; i<5; i++) {
        int num; 
        cin >> num;
        numbers.push_back(num);
    }
    
    if(below_threshold(numbers, threshold)) {
        cout << "All numbers are below the threshold." << endl;
    } else {
        cout << "At least one number is not below the threshold." << endl;
    }
    
    return 0;
}