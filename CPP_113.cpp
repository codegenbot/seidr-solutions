#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int odd_count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + "\n the str" + to_string(odd_count) + "ng " + s + " of the " + to_string(odd_count) + "\nput.";
        result.push_back(res);
    }
    return result;
}

int main() {
    assert (issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\n the str2ng 271 of the 2\nput.",
        "the number of odd elements 2\n the str3ng 137 of the 3\nput.",
        "the number of odd elements 2\n the str3ng 314 of the 2\nput."
    }));
    cout << "All test cases pass.\n";

    return 0;
}