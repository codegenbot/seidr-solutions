void sort_even(const std::vector<float>& v) {
    std::vector<float> temp = v;
    std::sort(temp.begin(), temp.end(), [](const float &a, const float &b) {
        return ((int)a % 2 == 0 && (int)b % 2 == 0) ? a > b : (int)a % 2 < (int)b % 2;
    });
}