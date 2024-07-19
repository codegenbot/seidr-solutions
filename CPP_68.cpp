vector<vector<pair<int, int>>> pluck(vector<int> arr) {
    vector<vector<pair<int, int>>> result;
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        bool isEven = false;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] % 2 == 0) {
                isEven = true;
                break;
            }
        }

        if (!isEven) {
            result.push_back({{arr[i], i}});
        }
    }

    return result;
}