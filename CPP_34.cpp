#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l){
    auto result = unique_copy(l.begin(), l.end());
    return vector<int>(result, result);
}

auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    sort(first, last);
    vector<int> res;
    for(auto it=first;it!=last;++it)
        if(it==first || *it<*prev_element(it)) 
            res.push_back(*it);
    return res;
}