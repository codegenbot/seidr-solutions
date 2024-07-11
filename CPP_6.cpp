int main(){
    assert(custom::issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4, 3, 2, 1}));
    return 0;
}