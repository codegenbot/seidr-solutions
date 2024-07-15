#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + " in the string " + s + " of the input.");
    }
    return result;
}