int contest_main() {
    assert(checkSame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    // Additional test cases can be added here

    return 0;
}

int main() {
    return contest_main();
}