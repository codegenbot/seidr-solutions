```
namespace std {
    std::vector<int> pluck(const std::vector<int>& v) {
        std::vector<int> result;
        for (int x : v) {
            if (x == 7 || x == 1) {
                result.push_back(x);
            }
        }
        return result;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}