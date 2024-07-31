namespace NS {
    #include <vector>
    
    std::vector<int> incr_list(std::vector<int> v) {
        std::vector<int> result;
        for(int i = 0; i < v.size(); i++) {
            result.push_back(v[i] + 1);
        }
        return result;
    }
}

bool NS::issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(NS::issame(NS::incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}