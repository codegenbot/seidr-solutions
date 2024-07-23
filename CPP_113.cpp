#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        string str = "the number of odd elements ";
        str += to_string(count);
        str += " in the str";
        str += to_string(i+1);
        str += " of the input.";
        result.push_back(str);
    }
    return result;
}