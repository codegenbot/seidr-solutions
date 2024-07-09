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

int sorted_list_sum(vector<string> s) {
    int sum = 0;
    for (const auto& str : s) {
        sum += str.length();
    }
    return sum;
}

int main() {
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}));
    vector<string> v = {"aaaa", "bbbb", "dd", "cc"};
    int result = sorted_list_sum(v);
    cout << "sorted_list_sum: " << result << endl;
    return 0;