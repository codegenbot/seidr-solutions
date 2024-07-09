#include <algorithm>

vector<string> vector_sort(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){
            if(a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    erase_if(lst, [](const string& s){return s.size() % 2;});
    return lst;
}