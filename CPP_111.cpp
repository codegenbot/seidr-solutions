#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char ch : test) {
        freq[ch]++;
    }

    int max_count = 0;
    for (const auto &entry : freq) {
        if (entry.second > max_count) {
            max_count = entry.second;
        }
    }

    map<char, int> result;
    for (const auto &entry : freq) {
        if (entry.second == max_count) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("test"), {{'t', 2}})); 
    assert(issame(histogram("hello"), {{'l', 2}})); 
    assert(issame(histogram(""), {})); 
    assert(issame(histogram("mississippi"), {{'i', 4}}));
    return 0;
}