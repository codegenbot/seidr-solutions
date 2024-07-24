#include <vector>
#include <algorithm>
#include <iostream>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    vector<string> inputList = {"apple", "banana", "pear", "kiwi", "orange", "grape", "plum"};
    
    vector<string> result = sorted_list_sum(inputList);
    
    for(const auto& str : result) {
        std::cout << str << " ";
    }
    
    return 0;
}