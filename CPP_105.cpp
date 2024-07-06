#include <vector>
using namespace std;

bool is_same(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i = 0; i < a.size();i++)
        if (a[i]!=b[i]) return false;
    return true;
}

vector<pair<int, string>> by_length(vector<int> arr){
    vector<pair<int, string>> temp;
    for(int i = 0; i < arr.size();i++){
        if(i >= 1 && i <= 9)temp.push_back({i, to_string(i) == "1" ? "One": 
            to_string(i) == "2" ? "Two":
            to_string(i) == "3" ? "Three":
            to_string(i) == "4" ? "Four":
            to_string(i) == "5" ? "Five":
            to_string(i) == "6" ? "Six":
            to_string(i) == "7" ? "Seven":
            to_string(i) == "8" ? "Eight":
            "Nine"});
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    return temp;
}

int main(){
    assert(is_same(by_length({9, 4, 8}), vector<string>({"Nine", "Eight", "Four"})));
    return 0;
}