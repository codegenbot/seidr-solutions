#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    bool result = true;
    for(int i:q){
        if(i>1){
            result=false;
            break;
        }
    }
    return result;
}

assert(will_it_fly({5}, 5) == true);