#include <map>
#include <sstream>

using namespace std;

map<char, int> histogram(string test);

bool compareMaps(map<char,int> a, map<char,int> b){
    return a == b;
}

int main() {
    assert(compareMaps(histogram("a"), {{'a', 1}}));
}

map<char, int> histogram(string test){
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxChars[entry.first] = entry.second;
        }
    }
    return maxChars;
}