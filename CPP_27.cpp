#include<string>
using namespace std;

string changeCase(string str) {
    using std::islower;
    using std::toupper;
    using std::tolower;
    string result = "";
    
    for(size_t i = 0; i < str.size(); i++){
        char c = str[i];
        if(islower(c))
            result.push_back(toupper(c));
        else if(isupper(c))
            result.push_back(tolower(c));
        else
            result.push_back(c);
    }
    
    return result;
}