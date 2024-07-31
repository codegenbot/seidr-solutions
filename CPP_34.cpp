#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){

}

int main(){
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}