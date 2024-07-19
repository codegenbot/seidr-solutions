#include <string>
#include <vector>
#include <set>
#include <cassert>
using namespace std;

string find_max(const vector<string>& words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for (const string& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}