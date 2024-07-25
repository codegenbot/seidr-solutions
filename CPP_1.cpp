```cpp
int test_main() {
    std::vector<std::string> result(1000);
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}