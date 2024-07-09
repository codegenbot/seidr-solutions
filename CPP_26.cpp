#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Input numbers from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    // Remove duplicates from the vector
    numbers = remove_duplicates(numbers);
    
    // Output the unique elements
    cout << "Unique elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}