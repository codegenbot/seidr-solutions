```
int test_main() {
    assert(check_dict_case({}) == false);
    assert(!check_dict_case({{"hello", "world"}, {"HELLO", "WORLD"}}));
    return 0;
}