#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), end(unique_copy(l.begin(), l.end())));
    sort(result.begin(), result.end());
    return result;
}

auto unique_copy(auto first, auto last) {
    auto i = first - 1;
    for(; first != last; ++first) {
        if(i == first || *i != *first) {
            ++i;
            *++i = *first;
        }
    }
    return ++i;
}