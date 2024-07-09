#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool issame(map<char,int> a,map<char,int> b) {
    if(a.size() != b.size()) return false;
    for(auto it = a.begin();it!=a.end();++it){
        if(b.find(it->first)==b.end() || b[it->first] != it->second) return false;
    }
    return true;
}

map<char,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;

    for (string word : split(test, ' ')) {
        for (char c : word) {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            maxCount = max(maxCount, result[c]);
        }
    }

    map<char,int> finalResult;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;

}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}