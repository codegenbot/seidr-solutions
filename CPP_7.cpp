```cpp
bool same(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size()!=b.size())return false;
    for(auto s : a){
        if(std::find(b.begin(),b.end(),s)==b.end())return false;
    }
    return true;
}

int main(){
    assert(same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}