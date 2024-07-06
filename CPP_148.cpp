using namespace std;

vector<string> bf(string a, string b){
    vector<string> result;
    
    int i = 0, j = 0;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            result.push_back(a.substr(i,1));
            i++;
            j++;
        } else if (a[i] < b[j]) {
            result.push_back(a.substr(i,1));
            i++;
        } else {
            j++;
        }
    }
    
    while (i < a.size()) {
        result.push_back(a.substr(i,1));
        i++;
    }
    
    while (j < b.size()) {
        j++;
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}