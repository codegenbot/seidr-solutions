int main() {
    std::string input;
    std::cout << "Enter the text and target separated by a space: ";
    std::getline(std::cin, input);
    
    size_t spacePos = input.find(' ');
    std::string text = input.substr(0, spacePos);
    std::string target = input.substr(spacePos + 1);

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}