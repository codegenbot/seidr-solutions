std::vector<int> make_a_pile(std::vector<int> v){
    std::sort(v.begin(), v.end());
    return v;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return make_a_pile(a) == make_a_pile(b);
}

int main(){
    std::vector<int> vec1 = {3, 1, 4, 1, 5, 9};
    std::vector<int> vec2 = {2, 7, 1, 8, 2, 8};

    assert(issame(vec1, vec2) == false);
}