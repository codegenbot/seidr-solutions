#include <algorithm>
#include <string>

std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max({interval1.first, interval2.first}.front(), {interval1.second, interval2.second}.front());
    int end = std::min({interval1.first, interval2.first}.back(), {interval1.second, interval2.second}.back());

    if (start <= end)
        return "YES";
    else
        return "NO";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}