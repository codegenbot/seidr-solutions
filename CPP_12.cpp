using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string str1 = strings[0];
    for(auto s : strings){
        if(s.length() > str1.length()){
            str1 = s;
        }
        else if(s.length() == str1.length()){
            str1 = s;
        }
    }
    return str1;