```cpp
vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int i = 0;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        i++;
        if (i >= 10)
            break;
    }
    sort(result.begin(), result.end());
    return result;
}