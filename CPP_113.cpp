#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the string " + str + " of the input.");
    }
    return result;
}