#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(),lst.end());
    string str = "";
    for(auto s : lst) {
        str += s;
    }
    if(str.length() > 0) {
        return {str};
    } else {
        return {"0"};
    }
}