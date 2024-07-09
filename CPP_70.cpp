#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        if (issame({minVal}, lst)) {
            for (int i : lst)
                result.push_back(i);
            return result;
        }
        else if (!issame({minVal}, lst) && !issame({maxVal}, lst)) {
            result.push_back(minVal);
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
        else if (!issame({minVal}, lst) && issame({maxVal}, lst)) {
            for (int i : {minVal, maxVal})
                result.push_back(i);
            while (!lst.empty()) {
                int temp = *min_element(lst.begin(), lst.end());
                result.push_back(temp);
                lst.erase(std::remove(lst.begin(), lst.end(), temp), lst.end());
            }
        }
    }
    return result;
}

int main() {
    vector<int> input;
    // Add code here to read the user's input and then call strange_sort_vector(input).
    // Print out the output.
    return 0;
}