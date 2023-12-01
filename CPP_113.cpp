#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                count++;
            }
        }
        string str = "the number of odd elements " + to_string(count) + " in the string " + to_string(i) + " of the input.";
        result.push_back(str);
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == vector<string>{"the number of odd elements 2 in the string 0 of the input.",
                                                            "the number of odd elements 3 in the string 1 of the input.",
                                                            "the number of odd elements 2 in the string 2 of the input."});
    return 0;
}