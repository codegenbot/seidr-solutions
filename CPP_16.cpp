int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int count = 0;
    bool seen[256] = {false}; // assume ASCII

    for (char c : str) {
        if (std::isalpha(c)) {
            char ch = tolower(c);
            if (!seen[ch]) {
                seen[ch] = true;
                count++;
            }
        }
    }

    std::cout << "Number of distinct characters: " << count << std::endl;
}