#include <iostream>
#include <vector>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int odd_count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}

int main(){
    vector<string> expected = {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };

    vector<string> result = odd_count({"271", "137", "314"});

    for(size_t i = 0; i < expected.size(); ++i){
        if(result[i] != expected[i]){
            cout << "Test failed!" << endl;
            return 1;
        }
    }

    cout << "All tests passed!" << endl;

    return 0;
}