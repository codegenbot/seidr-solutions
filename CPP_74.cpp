#include <vector>
#include <string>
using namespace std;

vector<string> total_match(const vector<string>& a, const vector<string>& b){
    vector<string> result;
    for(const string& str1 : a){
        for(const string& str2 : b){
            if(str1 == str2){
                result.push_back(str1);
                break;
            }
        }
    }
    return result;
}