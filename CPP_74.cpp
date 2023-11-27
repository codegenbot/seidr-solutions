#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total1 = 0;
    int total2 = 0;

    for(string str : lst1){
        total1 += str.length();
    }

    for(string str : lst2){
        total2 += str.length();
    }

    if(total1 < total2){
        return lst1;
    }
    else{
        return lst2;
    }
}

bool is_same(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main(){
    assert(is_same(total_match({"this"}, {}), {}));
    assert(is_same(total_match({"this", "is", "a", "test"}, {"another", "test"}), {"this", "is", "a", "test"}));
    assert(is_same(total_match({"hello", "world"}, {"goodbye", "world"}), {"hello", "world"}));
    assert(is_same(total_match({"apple", "banana", "cherry"}, {"cherry", "orange"}), {"cherry", "orange"}));

    cout << "All assertions passed!";

    return 0;
}