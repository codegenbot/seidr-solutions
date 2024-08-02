#include <vector>
#include <algorithm>

int countOnes(int n) {
    int count = 0;
    while (n) {
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
        int ones = countOnes(arr[i]);
        if (i == 0 || ones != countOnes(arr[i-1])) {
            result.push_back(arr[i]);
        } else {
            bool inserted = false;
            for (int j = 0; j < result.size(); j++) {
                if (ones >= countOnes(result[j])) {
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