#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i<a.size(); i++){
        if (a[i] != b[i])return false;
    }
    return true;
}

vector<string> total_match(const char** lst1, int n1, const char** lst2, int n2) {
    int sum1 = 0;
    for(int i = 0; i < n1; i++){
        sum1 += strlen(lst1[i]);
    }
    
    int sum2 = 0;
    for(int i = 0; i < n2; i++){
        sum2 += strlen(lst2[i]);
    }
    
    if (sum1 < sum2) {
        return vector<string>(lst2, lst2 + n2);
    } else if (sum1 > sum2) {
        return vector<string>(lst1, lst1 + n1);
    } else {
        if(issame(vector<string>(lst1, lst1 + n1), vector<string>(lst2, lst2 + n2)))
            return vector<string>(lst1, lst1 + n1);
        else
            return vector<string>(lst2, lst2 + n2); 
    }
}

int main() {
    const char* vec1[] = {"this"};
    int n1 = sizeof(vec1) / sizeof(vec1[0]);
    const char* vec2[] = {""};
    int n2 = sizeof(vec2) / sizeof(vec2[0]);
    assert(issame(total_match(vec1, n1, vec2, n2),{"","this"}));  
    return 0;
}