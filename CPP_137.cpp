std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    if (auto *int_a = std::get_if<int>(&get(any, a)); auto *int_b = std::get_if<int>(&get(any, b))) {
        return to_string(std::max(*int_a, *int_b));
    } else if (auto *float_a = std::get_if<float>(&get(any, a)); auto *float_b = std::get_if<float>(&get(any, b))) {
        return to_string(std::max(*float_a, *float_b));
    } else if (auto *str_a = std::get_if<std::string>(&get<any>(a)); auto *str_b = std::get_if<std::string>(&get<any>(b))) {
        return (*str_a > *str_b) ? *str_a : *str_b;
    } else {
        // Handle all other cases or unexpected inputs
        return 0;
    }
}