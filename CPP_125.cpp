#include <vector>
#include <string>
#include <cassert> // add this line

bool issame(const vector<string>& a, const vector<string>& b) { // define issame function
    return a == b;
}

vector<string> split_words(const string& txt); // declare split_words function

vector<string> split_words(const string& txt) { // move split_words definition here
    // existing implementation
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}