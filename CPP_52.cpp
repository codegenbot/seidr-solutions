#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> numbers;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < threshold) return true;
    }
    return false;
}

int main() {
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
        int temp; 
        cin >> temp; 
        numbers.push_back(temp);
    }
    
    // test the function
    assert (not(below_threshold(numbers, 10)));
    
    return 0;
}