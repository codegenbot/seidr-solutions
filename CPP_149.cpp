#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst){
    std::vector<std::string> result;
    for(int i=0; i<lst.size(); i++){
        if(lst[i].length() % 2 == 0){
            result.push_back(lst[i]);
        }
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}