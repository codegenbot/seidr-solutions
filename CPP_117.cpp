#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool is_same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    // Sample usage of is_same function
    vector<string> vec1 = {"apple", "banana", "cherry"};
    vector<string> vec2 = {"apple", "banana", "cherry"};
    
    if (is_same(vec1, vec2)) {
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }
    
    return 0;
}