#include <vector>
#include <string> 
using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
    vector<int> result;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++){
        if(text.substr(i, targetLength) == target){
            result.push_back(i);
            while((i+targetLength) < text.length() && text.substr(i, targetLength) == target){
                i += targetLength;
                result.push_back(i);
            }
        }
    }
    return result;
}