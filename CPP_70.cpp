using namespace std;

#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> list) {
    sort(list.begin(),list.end());
    int index = 0;
    for(int i=0;i<list.size();i++){
        if(index % 3 == 0){
            reverse(list.begin()+index,list.begin()+(index+1));
        }
        index++;
    }
    return list;
}

int main1() {
    vector<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    assert(issame(strange_sort_list(list), list));
    return 0;
}