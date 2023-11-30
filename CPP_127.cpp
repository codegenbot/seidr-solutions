#include <vector>
#include <algorithm>
#include <string>

std::string findIntersection(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectionStart = std::max(start1, start2);
    int intersectionEnd = std::min(end1, end2);
    
    int intersectionLength = intersectionEnd - intersectionStart + 1;
    
    if (intersectionLength <= 1) {
        return "NO";
    }
    
    for (int i = 2; i * i <= intersectionLength; i++) {
        if (intersectionLength % i == 0) {
            return "NO";
        }
    }
    
    return "YES";
}