```cpp
int strongestExtension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = 0;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos) {
            return className + "." + extension;
        }
    }
    return -1; 
}

int main() {
    assert (strongestExtension("Sp", {"671235", "Bb"}) == "Sp.671235");
}