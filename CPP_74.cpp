#include <vector>
#include <string>
#include <cassert>

int totalChars(const std::vector<std::string>& lst){
    int total = 0;
    for(const std::string& str : lst){
        total += str.size();
    }
    return total;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2){
    if(totalChars(lst1) < totalChars(lst2)){
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}