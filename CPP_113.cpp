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
    vector<string> input2 = {"12", "34", "56"};
    
    vector<string> result1 = odd_count(input1);
    vector<string> result2 = odd_count(input2);
    
    cout << "Result 1:" << endl;
    for (string str : result1) {
        cout << str << endl;
    }
    
    cout << "Result 2:" << endl;
    for (string str : result2) {
        cout << str << endl;
    }
    
    bool isSame = issame(result1, result2);
    cout << "Is Same: " << (isSame ? "true" : "false") << endl;
    
    return 0;
}