for (const auto& str : a) {
        if (find(b.begin(), b.end(), str) == b.end())
            return false;
    }
    return true;
}