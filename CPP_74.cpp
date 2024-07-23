```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    return (a == b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    vector<string> lst1 = {"this"};
    vector<string> lst2 = {};
    
    vector<string> result = total_match(lst1, lst2);
    
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}