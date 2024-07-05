#include<sstream>
map<char,int> histogram(string test){
    map<char, int> freq;
    stringstream ss(test);
    char ch;
    while (ss >> ch) {
        freq[ch]++;
    }
    int max_count = 0;
    for (const auto &p : freq) {
        if (p.second > max_count) {
            max_count = p.second;
        }
    }
    map<char, int> result;
    for (const auto &p : freq) {
        if (p.second == max_count) {
            result[p.first] = p.second;
        }
    }
    return result;
}