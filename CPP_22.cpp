```cpp
#include <cassert>
#include <vector>
#include <list>
#include <typeindex>
#include <algorithm>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
   return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), 
                  std::list<std::any>{std::any(3), std::any(3), std::any(3)}));
    
    return 0;
}
```