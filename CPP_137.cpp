std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        // Comparison logic for integers
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        // Comparison logic for floats
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = std::any_cast<std::string>(a);
        std::string str_b = std::any_cast<std::string>(b);
        if (str_a == str_b) {
            return std::any("Equal");
        } else {
            return std::any("Not Equal");
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        // Convert and compare int and string
    }
    
    return std::any("None");
}