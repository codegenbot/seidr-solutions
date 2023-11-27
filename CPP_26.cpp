#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (count(numbers.begin(), numbers.end(), numbers[i]) == 1) {
            result.push_back(numbers[i]);
        }
    }
    return result;
}