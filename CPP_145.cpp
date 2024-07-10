template<typename T>
bool issame(const T& a, const T& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums);

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [&](int a, int b){
        int sum_a = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
        int sum_b = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame<const std::vector<int>&>({0,6,6,-76,-21,23,4}));
    return 0;
}