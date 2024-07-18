sort(l.begin(), l.end());
    int left = 0, right = l.size() - 1;
    while (left < right) {
        if (l[left] + l[right] == 0) {
            return true;
        } else if (l[left] + l[right] < 0) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}