#include <vector>
#include <algorithm>

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= n - 1;
        count++;
    }
    return count;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        int ones = countBits(arr[i]);
        if (i == 0 || ones != countBits(arr[i-1])) {
            result.push_back(arr[i]);
        } else {
            bool inserted = false;
            for (int j = 0; j < result.size(); j++) {
                if (ones >= countBits(result[j])) {
                    result.insert(j, arr[i]);
                    inserted = true;
                    break;
                }
            }
            if (!inserted) {
                result.push_back(arr[i]);
            }
        }
    }

    return result;
}