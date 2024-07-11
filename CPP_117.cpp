#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> select_words(string s, int n);

int main() {
    string input;
    int n;
    getline(cin, input);
    cin >> n;
  
    vector<string> result = select_words(input, n);

    vector<string> expected_result = {"b", "c", "d", "f"};

    if(result == expected_result) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}

vector<string> select_words(string s, int n) {
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
