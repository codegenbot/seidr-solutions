using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string str = strings[0];
    for(auto s : strings){
        if(s.length() > str.length()){
            str = s;
        }
        else if(s.length() == str.length()){
            str = s;
        }
    }
    return str;