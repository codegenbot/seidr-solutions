Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return result;

    auto smallest_even = *min_element(arr.begin(), arr.end(),
        [](int a, int b){return (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0);});

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == smallest_even) {
            result.push_back({smallest_even, i});
            break;
        }
    }

    return result;
}