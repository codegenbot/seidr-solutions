#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<vector<string>> total_match(vector<string> a, int b) {
    vector<vector<string>> result;
    
    // implement your logic here
    // For example, you can generate all possible permutations of the strings in 'a' and add them to 'result'
    for(int i = 0; i <= b; i++) {
        for (int j = 0; j <= a.size() - i - 1; j++) {
            for (int k = 0; k < a.size(); k++) {
                if(k >= j && k <= j + i) {
                    vector<string> perm;
                    int start = j, end = j+i;
                    for(int l = start; l <= end; l++) {
                        perm.push_back(a[l]);
                    }
                    result.push_back(perm);
                }
            }
        }
    }
    
    return result;
}

int main() {
    assert(issame(total_match({"this"}, 0), {}));
    return 0;
}