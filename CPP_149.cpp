#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // Compare two vectors for equality
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        if(str.length() % 2 == 0){
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>{"cc", "dd", "aaaa", "bbbb"});
    return 0;
}