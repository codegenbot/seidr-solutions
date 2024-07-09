#include <vector>
#include <string>

using namespace std;

bool sameVectors(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto it = strings.begin(); it != strings.end(); ++it){
        if(it->find(prefix) == string::npos)
            result.push_back(*it);
    }
    return result;

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    for(int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    if(sameVectors(strings, filter_by_prefix(strings, prefix))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}