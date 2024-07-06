using namespace std;

#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<string> bf(string a, string b) {
    vector<string> result;

    int i = 0;
    while(i < a.size() && i < b.size()) {
        if(a[i] == b[i]) {
            result.push_back(a.substr(0, i+1));
            i++;
        } else {
            break;
        }
    }

    return result;
}