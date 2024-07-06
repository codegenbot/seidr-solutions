```c++
vector<int> sort_array(vector<int> array) {
    int sum = 0;
    for (int x : array) sum += x;
    if (sum % 2 == 1) {
        vector<int> result(array);
        sort(result.begin(), result.end());
        return result;
    } else {
        vector<int> result(array);
        sort(result.rbegin(), result.rend());
        return result;
    }
}