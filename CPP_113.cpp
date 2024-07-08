#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int count = 0;
        for (char c : str) {
            if (c - '0' % 2 != 0) {
                count++;
            }
        }
        string output = "the number of odd elements ";
        output += to_string(count);
        output += " in the string ";
        output += to_string(stoi(str.substr(0,1)));
        output += " of the input.";
        result.push_back(output);
    }
    return result;
}