#include<vector>
using namespace std;

bool issame(vector<string> a, vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string temp = "The number of odd elements " + to_string(count) + " in the string " + to_string(i+1) + " of the input.";
        result.push_back(temp);
    }
    return result;
}