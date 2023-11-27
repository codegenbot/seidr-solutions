#include <string>
using namespace std;

string longest(vector<string> strings){
    string longestString = "";
    for(int i=0; i<strings.size(); i++){
        if(strings[i].length() > longestString.length()){
            longestString = strings[i];
        }
    }
    return longestString;
}