#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int oddCount = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0') % 2 != 0){
                oddCount++;
            }
        }
        string str = "the number of odd elements " + to_string(oddCount) + "\nthe string " + to_string(i+1) + " of the input.";
        result.push_back(str);
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\nthe string 1 of the input.",
        "the number of odd elements 3\nthe string 2 of the input.",
        "the number of odd elements 2\nthe string 3 of the input."
    }));

    cout << "Test cases passed." << endl;
    return 0;
}