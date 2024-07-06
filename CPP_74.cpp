#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }
    
    if (sum1 < sum2) {
        return lst2; 
    } else if (sum1 > sum2) {
        return lst1;
    } else {
        if(issame(lst1, lst2))
            return lst1;
        else
            return lst2; 
    }
}

vector<string> testMain() {
    vector<string> vec1 = {{"this"}};
    vector<string> vec2 = {""};
    return total_match(vec1,vec2);
}