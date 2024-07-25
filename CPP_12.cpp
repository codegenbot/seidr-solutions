std::string longest(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& s : strings) {
        if (s.length() > result.length()) {
            result = s;
        }
    }
    return result; 
}

int main() {
}