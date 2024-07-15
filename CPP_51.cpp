#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string remove_vowels(string text) {
    string result = text;
    result.erase(remove_if(result.begin(), result.end(), [](char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'; }), result.end());
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");

    return 0;
}