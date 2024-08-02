#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.length() - target.length(); i++){
        bool match = true;
        int j = 0;
        while(j < target.length()){
            if(text[i+j] != target[j]){
                match = false;
                break;
            }
            j++;
        }
        if(match){
            result.push_back(i);
        }
    }
    return result;
}