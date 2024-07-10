int largestNegInt(int smallestPosInt) {
    int maxNeg = 0;
    int minPos = smallestPosInt;

    for (int num : {1, -2, 3, -4, 5}) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        }
        else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg >= 0 ? 0 : maxNeg), (minPos <= 0 ? 0 : minPos)};
}