#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string curr_group = "";
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            curr_group += c;
        } else if (c == ')') {
            count--;
            curr_group += c;
            
            if (count == 0) {
                result.push_back(curr_group);
                curr_group = "";
            }
        }
    }
    
    return result;
}