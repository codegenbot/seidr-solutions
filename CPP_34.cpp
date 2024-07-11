#include <algorithm>

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return result;
}

vector<int>::iterator unique_copy(iterator first, iterator last) {
    if (first == last)
        return first;

    std::vector<int> temp;
    for (; first != last; ++first) {
        if (std::find_if(temp.begin(), temp.end(),
                std::bind2nd(std::equal_to<int>(), *first)) == temp.end())
            temp.push_back(*first);
    }
    return temp.begin();
}