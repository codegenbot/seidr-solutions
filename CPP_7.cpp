if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (!filter_by_substring({a[i], b[i]}, "run").size())
            return false;
    }
    return true;
}