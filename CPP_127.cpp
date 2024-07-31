#include <vector>
#include <string>
#include <cmath>

std::string intersection(std::vector<int> interval1, std::vector<int> interval2);

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);
    
    if (start > end) {
        return "NO";
    }
    
    int length = end - start;
    
    if (length <= 1) {
        return "NO";
    }
    
    for (int i = 2; i <= std::sqrt(length); i++) {
        if (length % i == 0) {
            return "NO";
        }
    }
    
    return "YES";
}