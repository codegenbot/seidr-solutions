```cpp
bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 1 && b.size() == 1 && abs(a[0]) == max(abs(val), INT_MAX)) 
           || (a.size() == 2 && b.size() == 2 && (a[0] == 0 && a[1] == 0) && (b[0] == 0 && b[1] == 0));
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNegative = 0, minPositive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    return {(maxNegative > 0) ? maxNegative : 0, (minPositive < 1) ? minPositive : 0};
}