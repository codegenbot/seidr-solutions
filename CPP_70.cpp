#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> list) {
    std::sort(list.begin(),list.end());
    for(int i=0;i<list.size();i++){
        if((i+1)%3==0){
            std::reverse(list.begin()+i,list.begin()+(i+1));
        }
    }
    return list;
}

int main() {
    std::vector<int> list;
    list.push_back(1);
    list.push_back(1);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    assert(issame(strange_sort_list(list), list));
    return 0;
}