#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n);
bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n) {
    // Implementation remains the same
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(issame(result, {"world", "contest"}));

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}