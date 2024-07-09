int strongestExtension(std::string className, const std::vector<std::string>& extensions);
int main() {
    assert (strongestExtension("Sp", {"671235", "Bb"}) == "Sp.671235");
}

std::string strongestExtension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = 0;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos) {
            return className + "." + extension;
        }
    }
    return ""; // return as a string