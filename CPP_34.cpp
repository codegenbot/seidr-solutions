#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

vector<int>::iterator unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    sort(first, last);
    auto it = first;
    while (it != last) {
        *first = *it;
        ++first;
        ++it;
    }
    return ++first;
}