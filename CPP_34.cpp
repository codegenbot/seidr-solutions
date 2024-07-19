#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    sort(first, last);
    auto it = first; // not necessary
    return it; // not possible to erase an iterator, so this line is also unnecessary
}