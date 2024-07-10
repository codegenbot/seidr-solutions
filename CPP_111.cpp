#include <map>
#include <string>

bool issame(map<char,int> a,map<char,int> b){
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[256]; 
    int wordCount = 0;
    for (char c : test) {
        if (c == ' ') {
            wordCount++;
        } else {
            if (wordCount >= sizeof(words) / sizeof(string)) {
                return result; 
            }
            words[wordCount] += c;
        }
    }

    for (int i = 0; i <= wordCount; i++) {
        int count = 1;
        for (int j = i + 1; j <= wordCount; j++) {
            if (words[i] == words[j]) {
                count++;
            } else {
                break;
            }
        }
        result[words[i][0]] = count;
    }

    map<char, int> sameWords;
    for (auto p : result) {
        bool flag = false;
        for (auto q : result) {
            if (p.first == q.first && p.second == q.second) {
                sameWords[p.first] = p.second;
                flag = true;
                break;
            }
        }
        if (!flag) {
            sameWords[p.first] = p.second;
        }
    }

    return sameWords;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}