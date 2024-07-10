#include <iostream>
using namespace std;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < threshold) return true;
    }
    return false;
}

int main() {
    vector<int> numbers;
    int num = 0;

    cout << "Enter the number of elements: ";
    cin >> num;

    while(num <= 0){
        cout << "Invalid input. Please enter a positive integer.\n";
        cout << "Enter the number of elements: ";
        cin >> num;
    }

    numbers.resize(num); 

    for (int i = 0; i < num; i++) {
        int threshold;
        cout << "Enter element " << i + 1 << ": ";
        cin >> threshold;
        numbers.push_back(threshold);
    }

    bool result = below_threshold(numbers, 5);
    if (result) {
        cout << "At least one number is below the threshold." << endl;
    } else {
        cout << "No numbers are below the threshold." << endl;
    }
    
    return 0;
}