int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    int pos = -1; // Start from -1 instead of 0
    pos = static_cast<int>(text.find(target, 0));
    if (pos == std::string::npos) pos = -1;
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = static_cast<int>(text.find(target, pos + 1));
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}