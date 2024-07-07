int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered;
    filtered = filterStrings(str, "run"); 
    assert(isSame({}, filtered)); 
    return 0;
}