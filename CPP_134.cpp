int unique_main_function_name() {
    std::string input_str;
    std::getline(std::cin, input_str);

    while (!input_str.empty() && input_str.back() == ' ') {
        input_str.pop_back();
    }

    if (!check_if_last_char_is_a_letter(input_str)) {
        return 0;
    }

    return 1;
}