int main() {
    assert(match_parens("()") == true);
    assert(match_parens("(()())") == true);
    assert(match_parens(")") == false);  
    return 0;
}