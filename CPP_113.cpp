#include <vector>
#include <string>

vector<string> odd_count(vector<string> lst);

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                count++;
            }
        }
        string str = "the number of odd elements " + to_string(count) + " in the string " + to_string(i) + " of the input.";
        result.push_back(str);
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b){
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