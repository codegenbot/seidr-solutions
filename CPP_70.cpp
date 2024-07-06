```cpp
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }

    return result;
}

int main() {
    vector<int> testVec = {111111};
    assert(strange_sort_vector(testVec) == testVec);
    return 0;
}