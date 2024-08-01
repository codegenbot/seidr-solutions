int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; ++i) {
        right_sum += vec[i];
    }

    int min_diff = INT_MAX;
    int cut_position = 0;

    for (int i = 0; i < n; ++i) {
        right_sum -= vec[i];
        left_sum += vec[i];

        int current_diff = abs(right_sum - left_sum);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            cut_position = i;
        }
    }

    std::vector<int> left(vec.begin(), vec.begin() + cut_position + 1);
    std::vector<int> right(vec.begin() + cut_position + 1, vec.end());

    return 0;
}