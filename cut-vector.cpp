if (diff < minDiff || (diff == minDiff && abs(leftSum - rightSum) <= abs(2 * leftSum - totalSum))) {
    minDiff = diff;
    cutIndex = i;
}