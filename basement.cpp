```cpp
int basement(vector<int> v) {
    int sum = 0;
    sum += v[0]; // Add the first element to sum
    for (int i = 1; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}