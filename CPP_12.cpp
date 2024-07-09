using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string res = strings[0];
    for(auto str : strings){
        if(str.length() > res.length()){
            res = str;
        }
        else if(str.length() == res.length()){
            res = str;
        }
    }
    return res;
}