for (int i = 0; i < l.size() - 2; ++i) {
        for (int j = i + 1; j < l.size() - 1; ++j) {
            for (int k = j + 1; k < l.size(); ++k) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }

    return false;
}