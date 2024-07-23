```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i]) != abs(b[i])) {
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> v) {
    vector<float> even_nums;
    for (float num : v) {
        if (num % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    sort(even_nums.begin(), even_nums.end());
    return even_nums;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) , {-12, 8, 4, 2, 12, 5, 3, 11, 23, -10}));
    return 0;
}