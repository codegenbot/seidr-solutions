int largestNegInt(int maxNeg = 0), int smallestPosInt(int minPos = INT_MAX)) {
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

    return {maxNeg >= 0 ? 0 : maxNeg, minPos <= 0 ? 0 : minPos};
}