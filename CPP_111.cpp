#include <map>
#include <cassert>
#include <string>
using namespace std;

std::map<char, int> histogram(std::string str) {
    std::map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    return freq;
}