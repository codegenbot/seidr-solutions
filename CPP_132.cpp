int n = str.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            count++;
        } else {
            if (count > 0) {
                count--;
            }
        }
        if (count > 0 && i < n - 1 && str[i+1] == '[') {
            return true;
        }
    }
    return false;
}