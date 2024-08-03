#include <vector>
#include <string>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    string words_string = "ahmed,gamal";
    assert(issame(split(words_string, ','), {"ahmed", "gamal"}));
    return 0;
}