#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool has_close_elements(vector<int>& numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < numbers.size() - 1; i++){
        if(abs(numbers[i] - numbers[i+1]) < threshold){
            return true;
        }
    }
    return false;
}

int main() {
    // Test the function here
    vector<int> test_numbers = {3, 6, 9, 2, 5};
    int test_threshold = 3;
    
    if (has_close_elements(test_numbers, test_threshold)) {
        cout << "Close elements found!" << endl;
    } else {
        cout << "No close elements found." << endl;
    }
    
    return 0;
}