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
    vector<string> input1 = {"123", "456", "789"};
    vector<string> input2 = {"135", "246", "789"};
    
    vector<string> output1 = odd_count(input1);
    vector<string> output2 = odd_count(input2);
    
    cout << "Output1: " << endl;
    for (string str : output1) {
        cout << str << endl;
    }
    
    cout << "Output2: " << endl;
    for (string str : output2) {
        cout << str << endl;
    }
    
    bool same = issame(output1, output2);
    cout << "Are the outputs the same? " << (same ? "Yes" : "No") << endl;
    
    return 0;
}