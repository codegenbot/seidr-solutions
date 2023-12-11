```
vector<int> cutVector(vector<int>& input) {
    int n = input.size();
    int prefixSum = 0;
    int totalSum = accumulate(input.begin(), input.end(), 0);
    int minDifference = INT_MAX;
    int cutIndex = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += input[i];
        int difference = abs(totalSum - 2 * prefixSum);

        if (difference < minDifference) {
            minDifference = difference;
            cutIndex = i;
        }
    }

    vector<int> subVector1(input.begin(), input.begin() + cutIndex + 1);
    vector<int> subVector2(input.begin() + cutIndex + 1, input.end());

    return { subVector1, subVector2 };
}
```