#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    vector<int> result = remove_duplicates(numbers);
    cout << "The unique numbers are: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}