#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i].length() % 2 == 0){
            result.push_back(lst[i]);
        }
    }
    
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return result;
}

int main () {
    assert (sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == vector<string>{"cc", "dd", "aaaa", "bbbb"});
    
    return 0;
}