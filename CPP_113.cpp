#include <iostream>
#include <vector>

using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int odd_count = 0;
        for(auto ch : str){
            if((ch - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res_str = "the number of odd elements " + to_string(odd_count) + " in the string " + str + " of the input.";
        result.push_back(res_str);
    }
    return result;
}

int main() {
    vector<string> test_input = {"271", "137", "314"};
    vector<string> expected_output = {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };

    vector<string> result = odd_count(test_input);

    for(size_t i = 0; i < result.size(); ++i){
        if(result[i] != expected_output[i]){
            cout << "Test case " << i+1 << " failed." << endl;
            return 1;
        }
    }
    cout << "All test cases passed successfully." << endl;
    return 0;
}