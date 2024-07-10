#include <iostream>
#include <vector>

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for(int x : a){
        if(std::find(b.begin(),b.end(),x)!=b.end())
            result.push_back(x);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int x : a){
        if(std::find(b.begin(),b.end(),x)==b.end())
            return false;
    }
    return true;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {4, 3, 2}, {4, 3}), {4, 3}));
    return 0;
}