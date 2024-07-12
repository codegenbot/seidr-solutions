std::string str;
for (; std::getline(std::cin, str); ) {
    std::cout << camelCase(str) << std::endl;
}
return result;