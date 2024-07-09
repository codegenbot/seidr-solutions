#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int compare(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const string& s : lst1) sum1 += s.size();
    for (const string& s : lst2) sum2 += s.size();

    if (sum1 < sum2)
        return -1; 
    else if (sum1 > sum2)
        return 1;
    else
        return 0;
}

int main() {
    int result = compare({"this"}, {});
    assert(result == 0);
    return 0;
}