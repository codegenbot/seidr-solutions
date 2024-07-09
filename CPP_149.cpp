#include <vector>
#include <algorithm>

bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end());

    return result;
}

int main() {
    vector<string> lst = {"apple", "banana", "cherry", "date", "elderberry"};
    vector<string> expected = {"cher", "dat"};
    if (issame(sorted_list_sum(lst), expected)) {
        cout << "The function works correctly." << endl;
    } else {
        cout << "There is a problem in the code." << endl;
    }
}