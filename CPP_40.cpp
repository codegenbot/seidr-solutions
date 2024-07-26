for (size_t i = 0; i < l.size() - 2; ++i) {
        for (size_t j = i + 1; j < l.size() - 1; ++j) {
            for (size_t k = j + 1; k < l.size(); ++k) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}