```cpp
vector<int> cutVector(vector<int> vec) {
    int n = vec.size();
    if (n == 0) {
        return {};
    }

    // Check if the input vector has an odd number of elements
    if (n % 2 != 0) {
        // Return the middle element as the cut point
        return {vec[n / 2]};
    }

    int minDiff = INT_MAX;
    int diff, leftSum, rightSum;
    for (int i = 1; i < n - 1; i++) {
        leftSum = vec[i - 1];
        rightSum = 0;
        for (int j = i + 1; j < n; j++) {
            rightSum += vec[j];
        }
        diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            result.clear();
            result.push_back(i);
        } else if (diff == minDiff) {
            result.push_back(i);
        }
    }

    return result;
}
```