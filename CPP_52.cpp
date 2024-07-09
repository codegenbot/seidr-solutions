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

    cout << "Enter the number of integers: ";
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        numbers.push_back(num);
    }

    cout << "Enter the threshold: ";
    cin >> threshold;

    if(below_threshold(numbers, threshold)) {
        cout << "All numbers are below threshold." << endl;
    } else {
        cout << "At least one number is not below the threshold." << endl;
    }
    
    return 0;
}