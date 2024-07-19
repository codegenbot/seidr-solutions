#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> numbers) {
    int sum = 0;
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    size_t n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<string> numbers;  
    for (size_t i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        numbers.push_back(to_string(num)); 
    }
    
    if(numbers.empty()) { 
        cout << "Sum of odd elements: 0" << endl;
    } else {
        int sum = 0;
        for (int i = 0; i < numbers.size(); i++) {
            if (stoi(numbers[i]) % 2 != 0) {
                sum += stoi(numbers[i]);
            }
        }
        cout << "Sum of odd elements: " << sum << endl; 
    }
    return 0;
}