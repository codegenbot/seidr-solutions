```cpp
bool isSame(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> filterIntegers(vector<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (!value.type()->is_same_v<any::type<char>>()) {
            if (value.has_value()) {
                result.push_back(value.get_as<int>());
            }
        }
    }
    return result;
}

int myMain() {
    vector<any> values = {10, 20, 'a', 'b', 30.5f, "hello"};
    vector<int> output = filterIntegers(values);
    for (const auto& num : output) {
        cout << num << "\n";
    }
    return 0;
}