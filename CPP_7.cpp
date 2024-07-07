int test() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered;
    filtered = filterBySubstring(str, "run"); 
    assert(areStringsEqual({},filtered)); 
    return 0;
}