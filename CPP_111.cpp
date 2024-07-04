#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;

map<char,int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    char ch;

    while (ss >> ch) {
        freq[ch]++;
    }

    int max_count = 0;
    for (const auto& pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second;
        }
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}