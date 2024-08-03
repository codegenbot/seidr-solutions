int main(){
    assert(check_equality(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}