#include <iostream>
#include <vector>

using namespace std;

vector<string> odd_count(vector<string> lst);

int main() {
    // Test the odd_count function
    vector<string> input = {"271", "137", "314"};
    vector<string> output = odd_count(input);
    for (string str : output) {
        cout << str << endl;
    }
    
    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char ch : str) {
            if ((ch - '0') % 2 != 0) {
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + " in the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}