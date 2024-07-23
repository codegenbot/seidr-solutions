#include <vector>
#include <algorithm>

bool isequal(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> input_list) {
    std::sort(input_list.begin(),input_list.end());
    for(int i=0;i<input_list.size();i++){
        if((i+1)%3==0){
            std::reverse(input_list.begin()+i,input_list.begin()+(i+1));
        }
    }
    return input_list;
}

int main() {
    std::vector<int> input_list;
    input_list.push_back(1);
    input_list.push_back(1);
    input_list.push_back(1);
    input_list.push_back(1);
    input_list.push_back(1);
    input_list.push_back(1);
    assert(isequal(strange_sort_list(input_list), input_list));
    return 0;
}