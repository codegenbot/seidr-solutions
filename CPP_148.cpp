using namespace std;

std::vector<std::string> bf(std::string a, std::string second) {
    vector<string> result;
    
    for (char c : a) {
        if (c >= 'a' && c <= 'z') {
            char up = toupper(c);
            string upperA = "";
            for (char x : a) {
                if (x == c) {
                    upperA += up;
                } else {
                    upperA += x;
                }
            }
            result.push_back(upperA);
        }
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