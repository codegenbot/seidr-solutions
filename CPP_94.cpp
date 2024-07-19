int skjkasdkd(const std::set<int>& s) {
    return setSize(s);
}

int mainTest() {
    assert(getSetSize(127, 97, 8192) == 3); 
    int result = skjkasdkd({127, 97, 8192});
    std::cout << "The size of the set is: " << result;
    return 0;
}