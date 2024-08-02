bool issame(int a, int b) {
    return (a == 0 && b == 0) || (a != 0 && b != 0);
}

vector<int> largest_smallest_integers(vector<int> lst) {
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

    return {issame(maxNeg, 0) ? 0 : maxNeg, issame(minPos, INT_MAX) ? 0 : minPos};
}