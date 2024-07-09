#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int num;
    
    // Read number of elements
    cout << "Enter the number of elements: ";
    cin >> num;

    // Read the numbers from user
    cout << "Enter the elements: ";
    for (int i = 0; i < num; i++) {
        cin >> input.push_back();
    }

    int result = solution(input);
    
    cout << "Sum of odd elements is: " << result;
    
    return 0;
}