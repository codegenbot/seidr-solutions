```cpp
#include <iostream>
using namespace std;

int solution(vector<long long> numbers) {
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

    vector<long long> numbers;  
    for (size_t i = 0; i < n; i++) {
        long long num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        numbers.push_back(num);
   
    
    if(numbers.empty()) { 
        cout << "Sum of odd elements: 0" << endl;
    } else {
        cout << "Sum of odd elements: " << solution(numbers) << endl;
    }
    return 0;
}