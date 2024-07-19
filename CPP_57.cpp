for (int i = 1; i < l.size(); i++) {
    if (l[i] < l[i - 1]) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[j] >= l[j - 1]) {
                return false;
            }
        }
        return true;
    } else if (l[i] > l[i - 1]) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[j] <= l[j - 1]) {
                return false;
            }
        }
        return true;
    }
}
return true;