#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> vector_sort(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b){ 
            return (a.size() % 2 == 1 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 == 1);
        });
    lst.erase(std::unique(it, lst.end()), lst.end());
    
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b){
            if(a.size() != b.size())
                return (a.size() < b.size());
            else
                return a < b;
        }
    );
    
    return lst;
}

int main() {
    assert(issame(vector_sort({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
}