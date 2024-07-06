using namespace std;

vector<string> bf(string first, string second) {
    if (first.size() == 0 || second.size() == 0) {
        vector<string> result;
        return result;
    }

    int i = 0, j = 0;
    vector<string> result;
    
    while (i < first.size() && j < second.size()) {
        if (first[i] == first[0]) {
            result.push_back(first.substr(0, i + 1));
            i = 0;
        } else {
            i++;
        }
        
        if (j < second.size() - 1) {
            if (second[j] == second[0]) {
                j = 0;
            } else {
                j++;
            }
        } else {
            return result;
        }
    }

    while (i < first.size()) {
        if (first[i] == first[0]) {
            result.push_back(first.substr(0, i + 1));
            i = 0;
        } else {
            i++;
        }
    }
    
    while (j < second.size()) {
        j++;
    }

    return result;
}

bool issame(vector<string> a, vector<string> second){
    for (int i = 0; i < a.size(); i++) {
        if (find(second.begin(),second.end(),a[i]) == second.end()) {
            return false;
        }
    }
    return true;
}