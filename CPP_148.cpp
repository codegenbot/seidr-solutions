#include <vector>
#include <algorithm>
using namespace std;

string bf(string s) {
    vector<string> vs;
    for(int i = 0; i < s.length();i+=3){
        string temp = "";
        for(int j = i; j <= i+2 && j < s.length() ;j++){
            temp += s[j];
        }
        vs.push_back(temp);
    }
    return "(" + s + " , {" + join(vs) + "})";
}

string join(vector<string> v){
    string ret = "";
    for(int i=0; i<v.size()-1;i++)
        ret+=v[i] +", ";
    if(v.size()>0)
        ret += v.back();
    return "("+ret+")";
}