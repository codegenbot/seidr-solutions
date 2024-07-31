int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "mia");
    if (result.second) {
        assert(true);
    } else {
        assert(result.first == "" || result.first == std::string(result.first).reverse());
    }
    return 0;
}