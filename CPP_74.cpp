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

vector<string> total_match(const char* lst1[], const char* lst2[]) {
    int sum1 = 0;
    for (const auto& str : {lst1}) {
        sum1 += strlen(str) + 1; // include null termination character
    }
    
    int sum2 = 0;
    for (const auto& str : {lst2}) {
        sum2 += strlen(str) + 1; // include null termination character
    }
    
    if (sum1 < sum2) {
        return lst2; 
    } else if (sum1 > sum2) {
        return lst1;
    } else {
        vector<string> result;
        for (const auto& str : {lst1}) {
            result.push_back(string(str));
        }
        if(issame(vector<string>(result.begin(), result.end()), vector<string>(vector<string>({lst2}))))
            return vector<string>(result.begin(), result.end());
        else
            return vector<string>({lst2});
    }
}

int main() {
    const char* vec1[] = {"this"};
    const char* vec2[] = {""};
    assert(issame(total_match(vec1,vec2),{"","this"}));  
    return 0;
}