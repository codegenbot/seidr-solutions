int main() {
    std::vector<std::string> lst1 {"this", "is", "a"};
    std::vector<std::string> lst2 {"hello", "from", "c++"};

    assert(issame({lst1}, {lst1}, {lst1}));  
    std::cout << "Test passed" << std::endl;
    return 0;
}