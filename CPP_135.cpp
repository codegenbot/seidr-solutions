int can_arrange(std::vector<int> arr) {
    if (arr.empty()) {
        return 1;
    }
    std::size_t max = *std::max_element(arr.begin(), arr.end());
    for (int i = 0; i <= max; i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return -1;
        }
    }
    return 1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::cout << can_arrange({1, 2, 3, 4, 5}) << std::endl;
    return 0;
}