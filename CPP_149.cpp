#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool areEqual(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst);

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

vector<string> expected_output = {"cc", "dd", "aaaa", "bbbb"};
vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});

for(const string& s : result) {
    cout << s << " ";
}

for (int i = 0; i < result.size(); i++){
    if(result[i] != expected_output[i]){
        cout << "Test case failed!";
        break;
    }
}