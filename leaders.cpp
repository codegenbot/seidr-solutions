
#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    std::vector<int> result;
    for (std::vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i) {
        bool isLeader = true;
        for (std::vector<int>::reverse_iterator j = i + 1; j != v.rend(); ++j) {
            if (*i < *j) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(*i);
    }
    return result;
}