#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers;
    int n, num;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<int> uniqueNumbers = remove_duplicates(numbers);
    
    for (int i = 0; i < uniqueNumbers.size(); i++) {
        cout << uniqueNumbers[i] << " ";
    }
    
    return 0;
}