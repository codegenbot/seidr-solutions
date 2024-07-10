#include <iostream>
#include <vector>

using namespace std;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int number : numbers) {
        if (number < threshold) {
            return true;
        }
    }
    return false;
}

int main() {    
    vector<int> numbers; 
    int n;  // Number of elements in the vector
    cout << "Enter number of integers: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;  
        cin >> num;
        numbers.push_back(num);
    }

    int threshold;
    cout << "Enter the threshold value: ";
    cin >> threshold;
    
    if (below_threshold(numbers, threshold)) {
        cout << "At least one number is below the threshold." << endl;
    } else {
        cout << "No numbers are below the threshold." << endl;
    }
    return 0;  
}