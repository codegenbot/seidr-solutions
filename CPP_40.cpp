for (unsigned int i = 0; i < l.size() - 2; i++) {
        for (unsigned int j = i + 1; j < l.size() - 1; j++) {
            for (unsigned int k = j + 1; k < l.size(); k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}