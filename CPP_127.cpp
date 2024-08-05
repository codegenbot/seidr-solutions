#include <vector>
#include <string>
#include <cmath>
#include <cassert> // Added for using assert

std::string intersection(std::vector<int> interval1, std::vector<int> interval2); // Function declaration

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if (start > end) {
        return "NO";
    }

    int length = end - start + 1;
    if (length <= 1) {
        return "NO";
    }

    for (int i = 2; i * i <= length; i++) { // Corrected loop condition
        if (length % i == 0) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO"); // Added assert usage
    return 0;
}