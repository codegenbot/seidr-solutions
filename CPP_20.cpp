bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}

float findClosestElements(std::vector<float> v) {
    float minDiff = std::numeric_limits<float>::max();
    for (int i = 0; i < v.size() - 1; ++i)
        if (std::abs(v[i] - v[i + 1]) < minDiff)
            minDiff = std::abs(v[i] - v[i + 1]);
    return minDiff;
}