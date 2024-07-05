#include <iostream>
#include <vector>
using namespace std;

// Define rolling_max function
vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int current_max = numbers[0];
    for(int num : numbers) {
        if(num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    vector<int> result = rolling_max(numbers);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}