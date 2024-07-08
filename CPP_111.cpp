```c++
bool issame(map<char,int> a,map<char,int> b) {
    if(a.size() != b.size()) return false;
    for(auto& p : a) {
        if(!b.count(p.first) || b[p.first] != p.second) return false;
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}