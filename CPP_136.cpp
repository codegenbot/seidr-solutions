int largestSmallestIntegers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        }
        else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return (maxNeg >= 0 ? 0 : maxNeg), (minPos <= 0 ? 0 : minPos);
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}