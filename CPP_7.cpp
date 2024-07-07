int main 
{ 
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    assert(issame(filterBySubstring(str, "run"), {"grunt", "prune"}));
    return 0;
}