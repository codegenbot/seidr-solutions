if (std::count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
    std::reverse(s.begin(), s.end());
}