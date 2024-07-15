auto below_threshold = [](const std::vector<int>& l, int t) -> bool {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
};

int main() {
    std::vector<int> v = {1, 8, 4, 10};
    assert(!below_threshold(v, 10));
}