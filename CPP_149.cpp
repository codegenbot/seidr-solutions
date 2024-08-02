#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const string& a, const string& b){
    return a.length() == b.length();
}

vector<string> sorted_list_sum(vector<string>& lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){return s.length() % 2 != 0;}), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    assert (issame("aaaa", "bbbb") == true);
    assert (issame("hello", "world") == false);
    assert (issame("cat", "dog") == true);
    
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> expected_output = {"cc", "dd", "aaaa", "bbbb"};
    assert(sorted_list_sum(input) == expected_output);
    
    return 0;
}