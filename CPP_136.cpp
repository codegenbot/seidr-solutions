int largestSmallest(int maxNeg, int minPos) {
    if (maxNeg >= 0 && minPos <= 0) {
        return 1;
    }
    else if ((maxNeg < 0 && minPos > 0) || (maxNeg > 0 && minPos < 0)) {
        return 2;
    }
    else {
        return 3;
    }
}