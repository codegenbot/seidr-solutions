#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    if(str1.size() != str2.size()) return false;
    for(int i = 0; i < str1.size(); ++i) {
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

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
        str += " in the string";
        result.push_back(str);
    }
    return result;
}