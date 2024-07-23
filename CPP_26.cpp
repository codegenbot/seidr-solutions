#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        bool found = false;
        for (int existing_num : result) {
            if (num == existing_num) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(num);
        }
    }
    return result;
}