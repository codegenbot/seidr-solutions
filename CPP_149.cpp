int main
{ 
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst;
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst.push_back(std::string);
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);
    
    std::cout << "Sorted List Sum: ";
    for(auto str : result) {
        std::cout << str << " ";
    }
    std::cout << endl;
    
    return 0;