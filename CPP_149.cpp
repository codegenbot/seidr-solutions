#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(),lst.end());
    string str = "";
    for(auto s : lst) {
        str += s;
    }
    vector<string> result;
    if(str.length() > 0) {
        result.push_back(str);
    } else {
        result.push_back("0");
    }
    return result;
}