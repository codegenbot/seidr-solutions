bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> order_by_points(std::vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }

    std::vector<std::pair<int, int>> sumDigits;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int sum = 0;
        while (num != 0) {
            sum += std::abs(num % 10);
            num /= 10;
        }
        sumDigits.push_back(std::make_pair(sum, i));
    }

    std::sort(sumDigits.begin(), sumDigits.end());

    std::vector<int> result;
    for (auto it = sumDigits.begin(); it != sumDigits.end(); it++) {
        result.push_back(nums[it->second]);
    }

    return result;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}