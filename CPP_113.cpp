#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string>& a, vector<string>& b){
    return a == b;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + str + " of the input.");
    }
    return result;
}

int main() {
    vector<string> input = {"123", "4567", "89"};
    vector<string> output = odd_count(input);
    
    for (string str : output) {
        cout << str << endl;
    }
    
    bool same = issame(output, input);
    cout << "Is the output same as the input? " << (same ? "Yes" : "No") << endl;
    
    return 0;
}