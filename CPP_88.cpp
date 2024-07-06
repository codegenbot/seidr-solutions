```cpp
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    if (sum % 2 != 0)
        return array;
    else
        std::sort(array.begin(), array.end());
    return array;
}