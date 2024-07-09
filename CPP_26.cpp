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
    vector<int> numbers = {5, 2, 8, 2, 7, 5, 8};
    numbers = remove_duplicates(numbers);
    for (int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}