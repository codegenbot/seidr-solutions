return a == b;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    std::vector<int> result = order_by_points(nums);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}