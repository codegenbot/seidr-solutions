```cpp
#include <algorithm>
#include <vector>

bool issame(vector<string> a,vector<string>b){
    bool res = true;
    for(int i = 0; i < a.size(); i++){
        if(i >= b.size() || a[i] != b[i]){
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if(a.size() != b.size()) return a.size() < b.size();
        else return a < b;
    });
    erase_if(lst, [](const string& s){return s.size() % 2;});
    vector<string> sorted_list_sum = lst;
    
    for(int i = 0; i < lst.size(); i++){
        for(int j = i+1; j < lst.size(); j++){
            if(sorted_list_sum[i].size() != sorted_list_sum[j].size()){
                return 0;
            }
            if(sorted_list_sum[i] > sorted_list_sum[j]){
                vector<string> temp = sorted_list_sum;
                swap(temp[i],temp[j]);
                sorted_list_sum = temp;
            }
        }
    }
    for(int i = 0; i < lst.size(); i++){
        for(int j = i+1; j < lst.size(); j++){
            if(sorted_list_sum[i].size() == sorted_list_sum[j].size() &&
               (issame(sorted_list_sum, vector<string> {sorted_list_sum[i], sorted_list.sum[j]})  || 
               issame(sorted_list_sum, vector<string> {sorted_list_sum[j], sorted_list_sum[i]}))){
                return 0;
            }
        }
    }
    return 1;
}