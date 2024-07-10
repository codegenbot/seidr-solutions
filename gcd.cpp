#include <vector>

namespace {
    std::vector<int> indicesOfSubstring(std::string text, std::string target) {
        std::vector<int> res;
        int n = text.size();
        int m = target.size();

        for (int i = 0; i <= n - m; i++) {
            if (text.substr(i, m) == target)
                res.push_back(i);
        }
        return res;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}