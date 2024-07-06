```bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}
assert(isSame({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}));