sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); ++i) {
        int target = -l[i];
        int start = i + 1;
        int end = l.size() - 1;
        while (start < end) {
            int sum = l[start] + l[end];
            if (sum < target) {
                ++start;
            } else if (sum > target) {
                --end;
            } else {
                return true;
            }
        }
    }
    return false;
}