#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        if (issame({minVal}, lst)) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        } else if (issame({minVal, maxVal}, lst)) {
            result.push_back(minVal);
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        } else {
            int tempMin = *min_element(lst.begin(), lst.end());
            if (tempMin == minVal) {
                result.push_back(minVal);
                lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
            } else {
                result.push_back(tempMin);
                lst.erase(std::remove(lst.begin(), lst.end(), tempMin), lst.end());
            }
        }
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3};
    vector<int> output = strange_sort_vector(input);
    for (int num : output) {
        std::cout << num << " ";
    }
    return 0;
}