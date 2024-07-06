#include <vector>
using vector = std::vector<int>;
vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
        bool isLeader = true;
        for (vector<int>::iterator j = i + 1; j != v.end(); ++j) {
            if (*i < *j) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(*i);
    }
    return result;
}