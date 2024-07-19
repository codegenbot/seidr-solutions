#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> sorted_list_sum(const vector<string>& lst){
    vector<string> mutable_lst(lst.begin(), lst.end());
    mutable_lst.erase(remove_if(mutable_lst.begin(), mutable_lst.end(), [](const string& s){ return s.length() % 2 != 0; }), mutable_lst.end());
    sort(mutable_lst.begin(), mutable_lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return mutable_lst;
}

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}