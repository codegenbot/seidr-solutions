#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l){
    auto result = unique_copy(l.begin(), l.end());
    return vector<int>(result, result);
}

auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    sort(first, last);
    vector<int> temp;
    for (auto i = first; i != last; ++i) {
        if (*i == *(first+1)) {
            continue;
        }
        temp.push_back(*i);
    }
    return temp;
}