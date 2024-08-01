int main() {
    std::map<std::string, int> dictionary;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::string key;
        int value;
        std::cin >> key >> value;
        dictionary[key] = value;
    }

    if(check_dict_case(dictionary)) {
        std::cout << "Dictionary keys have consistent case." << std::endl;
    } else {
        std::cout << "Dictionary keys do not have consistent case." << std::endl;
    }

    return 0;
}