#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(to_string(i));
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<vector<string>> result;
    for (int i = 0; i < temp.size(); i += 3) {
        if(i+2 < temp.size())
            result.push_back({temp[i], temp[i+1], temp[i+2]});
        else
            result.push_back({temp[i]});
    }
    return result;
}

int main() {
    vector<int> arr = {8,9,5,3,7,4};
    vector<vector<string>> output = by_length(arr);
    
    for(auto i : output) {
        for(auto j : i)
            std::cout << j << " ";
        std::cout << std::endl;
    }
    
    return 0;
}