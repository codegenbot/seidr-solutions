#include <vector>
#include <string>

bool issame(const vector<std::string>& a,const vector<std::string>& b){
    return (a==b);
}

int main(){
    bool result = issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"});
    return 0;
}