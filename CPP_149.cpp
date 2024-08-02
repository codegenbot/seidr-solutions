#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(const vector<string>& a, const vector<string>& b) {
    vector<string> result = a;
    
    result.insert(result.end(), b.begin(), b.end());
    sort(result.begin(), result.end(), [](const string& x, const string& y){
        return x.length() == y.length() ? x < y : x.length() < y.length();
    });
    
    return result;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}) == sorted_list_sum({"cc", "dd", "aaaa", "bbbb"}, {"aaaa", "bbbb", "dd", "cc"}));
    return 0;
}