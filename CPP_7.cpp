```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b);
vector<string> filter_by_substring(vector<string> strings, string substring);

// Function definitions
bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size();i++)
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    return true;
}

vector<string> filter_by_substring(string strings[], int n, string substring){
    vector<string> result;
    for(int i=0; i<n; i++) {
        if(strings[i].find(substring) != string::npos)
            result.push_back(strings[i]);
    }
    return result;
}

int main() {
    string strings[] = {"grunt", "trumpet", "prune", "gruesome"};
    assert (issame(filter_by_substring(strings, 4, "run") ,{"grunt", "prune"}));
    return 0;
}