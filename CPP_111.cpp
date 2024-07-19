#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

std::map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    auto lettersUnique = letters;
    letters.erase(unique(letters.begin(), letters.end()), letters.end());

    for (char c : lettersUnique) { 
        int count = 0;
        for (char letter : letters) {
            if (letter == c) count++;
        }
        if (count > 0) result[c] = count;
    }

    return result;

}

bool isSame(const map<char,int>& a, const map<char,int>& b){
    if(a.size() != b.size()) return false;
    for(auto p : a) {
        auto it = b.find(p.first);
        if(it == b.end() || it->second != p.second) return false;
    }
    return true;

}

int main() {
    cout << (isSame(histogram("a"), histogram("b")) ? "True" : "False") << endl;
}