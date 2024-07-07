if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (!std::is_equal(a[i], b[i])) {
            return false;
        }
    }
    return true;
}