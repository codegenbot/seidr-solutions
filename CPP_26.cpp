#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool issame(int x, int y) {
    if(x == y)
        return true;
    else
        return false;
}

int main() {
    vector<int> numbers;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<int> result = remove_duplicates(numbers);

    cout << "After removing duplicates: ";
    for (int num : result) {
        if(issame(result[0], num)) {
            cout << num << " ";
        } else {
            break;
        }
    }
    return 0;
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