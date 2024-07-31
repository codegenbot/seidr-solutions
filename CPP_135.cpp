int can_arrange(std::vector<int> arr) {
    if (arr.empty()) {
        return -1;
    }
    int max = *std::max_element(arr.begin(), (arr.empty()) ? arr.end() : arr.begin());
    for (int i = 0; i < max; i++) {
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