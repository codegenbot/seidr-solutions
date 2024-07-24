#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    sort(first, last);
    iterator it = unique_copy_helper(first, last);
    return it;
}

vector<int>::iterator unique_copy_helper(iterator current, iterator last) {
    if (current == last)
        return last;
    while (*(current+1) == *current && current != last-1) {
        ++current;
    }
    return unique_copy_helper(current + 1, last);
}