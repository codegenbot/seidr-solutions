#include <algorithm>
#include <vector>
#include <initializer_list>
#include <iterator>
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

int sorted_list_sum(initializer_list<string> s) {
    int sum = 0;
    for (const auto& str : s) {
        sum += str.length();
    }
    return sum;
}

{
    vector<string> b={"aaaa", "bbbb", "dd", "cc"};
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, b));
    int result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    cout << "sorted_list_sum: " << result << endl;
}