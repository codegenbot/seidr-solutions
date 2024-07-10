#include <vector>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (it->length() % 2 != 0) {
            lst.erase(it);
            it = lst.begin();
        } else {
            ++it;
        }
    }
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             }
             return a.length() < b.length();
         });
    return lst;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size()!=b.size())
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) , {"cc","dd","aaaa","bbbb"}));
}