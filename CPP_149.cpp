#include <algorithm>

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    sort(result.begin(), result.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            } else {
                return a.length() < b.length();
            }
        });
    for(auto it=result.begin();it!=result.end();++it){
        auto pos=find(result.begin(),result.end(),*it);
        if(pos!=it+1) result.erase(it);
    }
    return result;
}