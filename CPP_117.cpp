#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                count++;
            }
            word += c;
        }
    }
    if (!word.empty() && count == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    vector<string> output = select_words("hello world from cpp", 2);
    vector<string> expected_output = {"world", "cpp"};
    assert(issame(output, expected_output));
    
    output = select_words("a b c d e f", 1);
    expected_output = {"b", "c", "d", "f"};
    assert(issame(output, expected_output));
    
    cout << "Tests passed successfully!" << endl;
    
    return 0;
}