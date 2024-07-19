```cpp
int main2() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    bool result = match_parens(lst);

    std::cout << (result ? "Yes\n" : "No\n");

    return 0;
}