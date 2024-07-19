#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main(){
    vector<string> v1 = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    vector<string> v2 = {"cc", "dd", "aaaa", "bbbb"};
    for (int i = 0; i < v1.size(); ++i) {
        assert(v1[i] == v2[i]);
    }

    // Add more test cases here
    vector<string> v3 = sorted_list_sum({"hello", "world", "abc"});
    vector<string> v4 = {"abc", "world", "hello"};
    for (int i = 0; i < v3.size(); ++i) {
        assert(v3[i] == v4[i]);
    }

    vector<string> v5 = sorted_list_sum({"programming", "is", "fun"});
    vector<string> v6 = {"is", "fun", "programming"};
    for (int i = 0; i < v5.size(); ++i) {
        assert(v5[i] == v6[i]);
    }

    return 0;
}