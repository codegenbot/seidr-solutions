#include <cctype>
#include <vector>
using namespace std;

bool issame(char a,char b)
{
    if(toupper(a) == toupper(b)) {
        return true;
    }
    else
    {
        return false;
    }
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } 
        else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), [](unsigned char ch) { return !ispunct(ch) && !isvowel(ch); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}