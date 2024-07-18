sort(l.begin(), l.end());
    int left = 0;
    int right = l.size() - 1;
    while (left < right) {
        int sum = l[left] + l[right];
        if (sum == 0) {
            return true;
        } else if (sum < 0) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}