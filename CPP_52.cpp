#include <vector>
#include <iostream>
#include <initializer_list>

using namespace std;

bool below_threshold(vector<int> l, int t); // Add a semicolon

int main {
    vector<int> numbers(5);  // Initialize the vector with size 5
    int threshold;
    
    cout << "Enter the threshold: ";
    cin >> threshold;
    
    cout << "Enter the numbers separated by space: ";
    for(int i=0; i<5; i++) {
        int num; 
        cin >> num;
        numbers[i] = num;  // Assign values to the vector elements
    }
    
    if(below_threshold(numbers, threshold)) {
        cout << "All numbers are below the threshold." << endl;
    } else {
        cout << "At least one number is not below the threshold." << endl;
    }
    
    return 0;
}
