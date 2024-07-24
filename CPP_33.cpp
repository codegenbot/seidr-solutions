for (int i = 2; i < l.size(); i += 3) {
        int j = i;
        while (j > 0 && l[j] < l[j - 1]) {
            swap(l[j], l[j - 1]);
            j--;
        }
    }
    return l;
}