#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst);

void displayOutput(vector<string> output) {
    for (string s : output) {
        cout << s << endl;
    }
}

int main() {
    vector<string> lst;
    string temp;
    while(getline(cin,temp) && !temp.empty()) {
        lst.push_back(temp);
    }
    vector<string> output = odd_count(lst);
    displayOutput(output);
    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        string temp = "";
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
                temp += c;
            }
        }
        if (!temp.empty()) {
            string finalTemp = "the number of odd elements is ";
            finalTemp += to_string(count);
            finalTemp += " in the string";
            finalTemp += to_string(i + 1);
            finalTemp += ".";
            result.push_back(finalTemp);
            result.push_back(temp);
        } else {
            if (count == 0) {
                string finalTemp = "all characters are even in the string";
                finalTemp += to_string(i + 1);
                finalTemp += ".";
                result.push_back(finalTemp);
            }
        }
    }
    return result;
}