bool issame(int x, int y) {
    if (x == 0 && y == 0)
        return true;
    else
        return false;
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

    vector<int> result;
    if (!issame(maxNeg, 0)) {
        result.push_back(maxNeg);
    }
    if (!issame(minPos, INT_MAX)) {
        result.push_back(minPos);
    }

    return result;
}