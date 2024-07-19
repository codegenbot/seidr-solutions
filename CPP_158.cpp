#include <algorithm>
#include <vector>
using namespace std;

std::string findMax(vector<string> words){
    std::string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    return result;
}