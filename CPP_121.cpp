#include <iostream>
#include <vector>
using namespace std;

int solution(vector<string> numbers) {
    int sum = 0;
    for (int i = 1; i < numbers.size(); i++) {
        if (stoi(numbers[i]) % 2 != 0) {
            sum += stoi(numbers[i]);
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
        string num;
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