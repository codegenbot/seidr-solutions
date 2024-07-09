Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool found = false;
            for (auto& p : result) {
                if (p.first == arr[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({arr[i], i});
            }
        }
    }

    if (result.empty()) {
        return {{}, 0};
    }

    auto min_even = *min_element(result.begin(), result.end(),
                                  [](const pair<int, int>& a, const pair<int, int>& b) {
                                      return a.first < b.first;
                                  });

    vector<int> output({min_even.first, min_even.second});
    return output;
}