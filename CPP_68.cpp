vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (issame(arr[i], arr[j])) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back({arr[i], i});
            break;
        }
    }

    if (result.empty()) {
        for (int num : arr) {
            if (num % 2 != 0) {
                vector<pair<int, int>> temp = {{num, -1}};
                return temp;
            }
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), vector<pair<int, int>>()));
    return 0;
}