#include <vector>
#include <iostream>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxA", "xxx"}));
    assert (issame(filter_by_prefix({"apple", "banana", "blueberry", "cherry", "kiwi", "mango"}, "b"), {"banana", "blueberry"}));
    assert (issame(filter_by_prefix({"hello", "hi", "hey", "howdy", "hola", "greetings"}, "h"), {"hello", "hi", "hey", "howdy"}));
    cout << "All test cases pass" << endl;
    return 0;
}