#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isSame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> seen;
    vector<int> result;

    for (int num : numbers) {
        if (!seen.count(num) || !seen[num]) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> numbers[i];
    }

    vector<int> res = remove_duplicates(numbers);
    
    if (!res.empty()) {
        cout << "Duplicates removed: ";
        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    } else
        cout << "No duplicates found" << endl;

    return 0;
}