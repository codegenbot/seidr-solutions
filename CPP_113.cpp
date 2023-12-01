#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b) {
    // implementation of issame function
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\n the string 271 of the input.",
        "the number of odd elements 2\n the string 137 of the input.",
        "the number of odd elements 2\n the string 314 of the input."
    }));
    
    return 0;
}

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