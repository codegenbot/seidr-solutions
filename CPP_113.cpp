#include <vector>
#include <string>

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (const string& str : lst) {
        int count = 0;
        for (char c : str) {
            if (isdigit(c) && (c - '0') % 2 == 1) {
                count++;
            }
        }
        string output = "the number of odd elements ";
        output += to_string(count);
        output += "n the str";
        output += to_string(count);
        output += "ng ";
        output += str;
        output += " of the ";
        output += to_string(count);
        output += "nput.";
        result.push_back(output);
    }
    return result;
}