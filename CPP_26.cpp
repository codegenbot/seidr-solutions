#include<bits/stdc++.h>
using namespace std;

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
    vector<int> input;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        input.push_back(num);
    }

    vector<int> output = remove_duplicates(input);

    cout << "The array after removing duplicates: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}