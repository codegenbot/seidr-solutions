std::vector<int> findLeaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> leaders_result;
    for (int i = 0; i < n; ++i) {
        bool leader = true;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) leaders_result.push_back(arr[i]);
    }
    return leaders_result;