#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + s + " of the input.");
    }
    return result;
}

int contest_main(){
    vector<string> input;
    string temp;
    while (cin >> temp){
        input.push_back(temp);
    }

    vector<string> result = odd_count(input);

    for(const string &s : result){
        cout << s << endl;
    }

    return 0;
}

int main() {
    contest_main();
    return 0;
}