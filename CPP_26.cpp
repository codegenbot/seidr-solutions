#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_set<int> unique_numbers;
    vector<int> result;

    for (int num : numbers) {
        if (unique_numbers.find(num) == unique_numbers.end()) {
            unique_numbers.insert(num);
            result.push_back(num);
        }
    }

    return result;
}
int main() {
    vector<int> numbers = { 1, 2, 3, 2, 4 };
    vector<int> result = remove_duplicates(numbers);
    
    cout << "{";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "}";

    return 0;
}