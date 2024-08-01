#include <string>
#include <vector>
#include <algorithm>

std::string intersection(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) return "NO";
    
    for (int i = 2; i * i <= end - start + 1; ++i) {
        if ((end - start + 1) % i == 0) return "NO";
    }
    return "YES";
}