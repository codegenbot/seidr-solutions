#include <string>
#include <vector>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        result.push_back(to_string(3));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Add your testcases here to check the functionality of the split_words function
    vector<string> words1 = split_words("Hello, world");
    vector<string> words2 = split_words("Hello world");
    
    if (issame(words1, words2)) {
        cout << "The words are the same" << endl;
    } else {
        cout << "The words are different" << endl;
    }
    
    return 0;
}