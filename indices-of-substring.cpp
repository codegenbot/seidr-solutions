#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    for(int i = 0; i <= text.length() - target.length(); i++){
        if(text.substr(i, target.length()) == target){
            res.push_back(i);
        }
    }
    return res;
}