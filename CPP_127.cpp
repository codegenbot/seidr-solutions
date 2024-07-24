#include <string>
#include <vector>

std::string intersection(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    bool isPrime = true;
    for (int i = 2; i * i <= end - start + 1 && isPrime; ++i) {
        if ((end - start + 1) % i == 0 || (start + 1) % i == 0) isPrime = false;
    }

    return isPrime ? "YES" : "NO";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    // ... 
}