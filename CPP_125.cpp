#include <vector>
#include <string>
#include <cctype> // for islower
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    // Implementation to split txt into words and store in result
    return result;
}

int main(){
    assert(issame(split_words(""), {"0"}));
    return 0;
}