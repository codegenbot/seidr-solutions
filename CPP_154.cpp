#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.size(); i++){
        string temp = a.substr(i);
        int j = 0;
        while(j < temp.size() && (temp.substr(j) == b || temp.substr(temp.size()-j) == b)){
            j++;
        }
        if(j == temp.size())
            return true;
    }
    return false;
}