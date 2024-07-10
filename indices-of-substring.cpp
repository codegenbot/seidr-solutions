#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int length = target.length();
    
    for(int i=0; i<=text.length()-length; i++){
        if(text.substr(i,length) == target){
            result.push_back(i);
        }
    }
    return result;
}