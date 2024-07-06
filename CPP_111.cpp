```cpp
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool issame(map<char,int> a,map<char,int> b){
    if (a.size() != b.size())
        return false;
    
    for(auto& pair: a)
    {
        if(b.find(pair.first) == b.end() || b[pair.first] != pair.second)
            return false;
    }
    
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c, pos)) != string::npos) {
            count++;
            pos += 1; // skip the same character
        }
        if (count > 0) result[c] = count;
    }

    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    cout << "Success!" << endl;
    return 0;
}