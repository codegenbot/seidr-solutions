#include <cassert>
#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst);
bool are_same(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0') % 2 != 0){
                count++;
            }
        }
        string output = "the number of odd elements " + to_string(count) + " in the string " + to_string(i+1) + " of the input.";
        result.push_back(output);
    }
    return result;
}

bool are_same(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}