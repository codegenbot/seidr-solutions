sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); ++i) {
        int target = -l[i];
        int front = i + 1;
        int back = l.size() - 1;
        while (front < back) {
            int sum = l[front] + l[back];
            if (sum < target) {
                front++;
            } else if (sum > target) {
                back--;
            } else {
                return true;
            }
        }
    }
    return false;
}