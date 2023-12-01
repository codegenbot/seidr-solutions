#include <iostream>
#include <vector>
using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int count = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + str + " of the " + to_string(count) + "nput.");
    }
    return result;
}

bool is_same(vector<string> a,vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert (is_same(odd_count({"271", "137", "314"}) , {
          "the number of odd elements 2n the str2ng 2 of the 2nput.",
          "the number of odd elements 3n the str3ng 3 of the 3nput.",
          "the number of odd elements 2n the str2ng 2 of the 2nput."
    }));
    return 0;
}