#include <iostream>
#include <vector>

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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        input.push_back(s);
    }
    
    vector<string> result = odd_count(input);
    for (string res : result) {
        cout << res << endl;
    }
    return 0;
}

int main() {
    contest_main();
    return 0;
}