bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        if (i % 2 == 0) {
            result.push_back(minVal);
            auto it = std::remove(lst.begin(), lst.end(), minVal);
            lst.erase(it, lst.end());
        } else {
            result.push_back(maxVal);
            auto it = std::remove(lst.begin(), lst.end(), maxVal);
            lst.erase(it, lst.end());
        }
    }

    return result;
}

int main() {
    assert(strange_sort_vector({111111}) == vector<int>({111111}));
    return 0;
}