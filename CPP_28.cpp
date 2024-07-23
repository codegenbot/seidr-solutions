std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto& str : strings) {
        if (!str.empty()) {
            if (result != "") {
                result += ", ";
            }
            result += str;
        }
    }
    return result;
}