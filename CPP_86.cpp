#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    ostringstream oss;
    
    while (iss >> word) {
        string newWord;
        for (char c : word) {
            newWord += to_string(c) + " ";
        }
        newWord.pop_back(); // Remove the extra space
        oss << newWord << " ";
    }
    
    return oss.str();
}