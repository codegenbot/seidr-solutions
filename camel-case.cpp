#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (char c : str) {
        if (c == '-') {
            int pos = str.find(c);
            char temp[1000];
            strcpy(temp, str.substr(0, pos).c_str());
            strcat(temp, (char *)(&str[pos+1] + 1));
            result += toupper(strcat((char *)(&temp[strlen(temp)-1]), "0"));
        } else if (c == ' ') {
            int pos = str.find(c);
            char temp[1000];
            strcpy(temp, str.substr(0, pos).c_str());
            strcat(temp, (char *)(&str[pos+1] + 1));
            result += toupper(strcat((char *)(&temp[strlen(temp)-1]), "0"));
        } else {
            result += tolower(c);
        }
    }
    return result;
}