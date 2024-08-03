void sort_even(std::vector<float> &v) {
    std::vector<float> even_nums;
    for (auto num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    
    size_t even_index = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (static_cast<int>(v[i]) % 2 == 0) {
            v[i] = even_nums[even_index++];
        }
    }
}

bool issame(const std::vector<float> &v1, const std::vector<float> &v2) {
    return v1 == v2;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = v;
    sort_even(tmp);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}