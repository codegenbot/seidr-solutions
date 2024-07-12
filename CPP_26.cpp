```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result = {};
    for (int num : numbers) {
        bool duplicate = false;
        for (int i = 0; i < result.size(); ++i) {
            if (result[i] == num) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> no_duplicates = remove_duplicates(numbers);
    for (int num : no_duplicates) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}