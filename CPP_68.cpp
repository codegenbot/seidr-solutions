Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool found = false;
            for (const auto& p : result) {
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
        return {};
    }

    int min_value = result[0].first;
    int min_index = 0;

    for (const auto& p : result) {
        if (p.first < min_value) {
            min_value = p.first;
            min_index = p.second;
        } else if (p.first == min_value) {
            min_index = min(min_index, p.second);
        }
    }

    return {{min_value, min_index}};
}