#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int oddCount = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + " in the string " + s + " of the input.");
    }
    return result;
}

int main(){
    vector<string> result = odd_count({"271", "137", "314"});
    for(string s : result){
        cout << s << endl;
    }
    return 0;
}