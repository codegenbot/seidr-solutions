#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int count = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        string res = "The number of odd elements " + to_string(count) + " in the string " + str + " of the input.\n";
        result.push_back(res);
    }
    return result;
}