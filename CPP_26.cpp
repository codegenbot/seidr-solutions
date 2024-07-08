#include <iostream>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> mp;
    vector<int> result;

    for (int i = 0; i < numbers.size(); i++) {
        if (!mp.count(numbers[i])) {
            mp[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }

    return result;
}

int main() {
    int n, num;
    vector<int> numbers;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> num;
        numbers.push_back(num);
    }

    numbers = remove_duplicates(numbers);

    cout << "Unique elements are: ";
    for (auto i : numbers) {
        cout << i << " ";
    }
    
    return 0;
}