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
}

bool getNumbers(vector<int>& numbers, int& threshold) {
    cout << "Enter the threshold: ";
    cin >> threshold;

    numbers.clear();
    for(int i=0; i<5; i++) {
        cout << "Enter number #"<<i+1<<": ";
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    
    return true;
}

int main() {
    vector<int> numbers; 
    int threshold;

    if(getNumbers(numbers, threshold)) {
        if(below_threshold(vector<int>(numbers.begin(), numbers.end()), threshold)) {
            cout << "All numbers are below the threshold." << endl;
        } else {
            cout << "At least one number is not below the threshold." << endl;
        }
    }

    return 0;
}