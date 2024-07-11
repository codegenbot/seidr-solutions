Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<int> left(n);
    vector<int> right(n);

    for (int i = 0; i < n; i++) {
        if (i == 0)
            left[i] = arr[i];
        else
            left[i] = min(left[i - 1], arr[i]);

        if (i == n - 1)
            right[i] = arr[i];
        else
            right[i] = min(right[i + 1], arr[i]);
    }

    int changes = 0;
    for (int i = 0; i < n; i++) {
        changes += max(abs(left[i] - right[n - 1 - i]), abs(arr[i] - left[i]));
    }
    return changes;