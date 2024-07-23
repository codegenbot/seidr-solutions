#include <vector>
#include <string>

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c - '0' % 2 != 0) {
                count++;
            }
        }
        string str = "the number of odd elements ";
        str += to_string(count);
        str += " in the str" + to_string(i+1) + "ng ";
        str += to_string(i+1) + " of the input.";
        result.push_back(str);
    }
    return result;
}