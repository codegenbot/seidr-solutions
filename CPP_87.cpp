bool isEqual(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b){
    return a == b;
}

int main(){
    assert (isEqual(get_row({{}, {1}, {1, 2, 3}}, 3) , {{2, 2}}));
    return 0;
}