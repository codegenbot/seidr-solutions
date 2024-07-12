```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        result.push_back(max);
    }
    return result;

int main() { 
    vector<int> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    numbers.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    vector<int> result = rolling_max(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0; 
}