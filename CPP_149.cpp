int main_entry() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::vector<std::string> inputStrings; 
    for(int i = 1; i <= n; i++) {
        std::string str;
        std::cout << "Enter string " << i << ": ";
        for(int j = 0; j < i; j++)
            for (int k = 0; std::cin.get(k) && k < '\n'; ) {} 
        std::getline(std::cin, str);
        inputStrings.push_back(str);
   }
    
    std::vector<std::string> output = sorted_list_sum(inputStrings);
    
    for(int i = 0; i < output.size(); i++) {
        bool found = false;
        for(int j = 0; j < output.size(); j++) {
            if(i != j && output[i] == output[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            std::cout << output[i] << std::endl;
        }
    }
    
    return 0;
}