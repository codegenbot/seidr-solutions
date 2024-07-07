#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> &a, std::vector<std::string> &b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::string temp = reverse_delete("mamma", "mia")[0];
bool same = (temp == std::string(temp).reverse()) ? true : false;