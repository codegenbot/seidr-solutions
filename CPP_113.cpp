#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); ++i) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        string s = "the number of odd elements ";
        s += to_string(count);
        s += " in the str";
        s += to_string(i+1);
        s += " of the input.";
        result.push_back(s);
    }
    return result;
}