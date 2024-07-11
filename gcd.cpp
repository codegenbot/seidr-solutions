int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    size_t targetLen = target.length();

    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1;
    }

    return indices;
}