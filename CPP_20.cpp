```cpp
bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-6f) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> arr) {
    sort(arr.begin(), arr.end());
    vector<float> closest_elements = {arr[0], arr.back()};
    for (int i = 1; i < arr.size() - 1; ++i) {
        if (abs(arr[i] - closest_elements[0]) < abs(arr[i] - closest_elements[1])) {
            closest_elements[0] = arr[i];
        } else if (abs(arr[i] - closest_elements[1]) < abs(arr[i] - closest_elements[0])) {
            closest_elements[1] = arr[i];
        }
    }
    return closest_elements;
}

int main() {
    vector<float> arr = {1.1, 2.2, 3.1, 4.1, 5.1};
    assert(isSame(find_closest_elements(arr), {2.2, 3.1}));
    return 0;
}