bool issame(std::vector<int> a, std::vector<int> b){
    return a[1] == b[1];
}

int main(){
    assert(minPath({{1, 3}, {3, 2}}, 10) == std::vector<int>{1, 3});
    return 0;
}