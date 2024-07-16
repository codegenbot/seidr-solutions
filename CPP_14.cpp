#include <vector>
#include <string>

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str);

int main() {
    string input_str;
    cin >> input_str;
    
    vector<string> prefixes = all_prefixes(input_str);
    
    // Test issame function
    vector<string> test_vec = {"abc", "def", "ghi"};
    bool result = issame(test_vec, prefixes);
    
    cout << "Are the vectors the same? " << (result ? "Yes" : "No") << endl;
    
    return 0;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}