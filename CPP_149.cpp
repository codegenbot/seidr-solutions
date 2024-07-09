#include <algorithm>
#include <vector>
#include <initializer_list>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;

}

vector<string> sorted_list_sum(vector<string> input) {
    sort(input.begin(), input.end());
    return input;
}

int main() {
    vector<string> b={"aaaa", "bbbb", "dd", "cc"};
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;