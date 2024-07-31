int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "amma");
    if (result.second) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << result.first << std::endl;
    }
    return 0;
}