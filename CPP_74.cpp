std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars_lst1 = 0, total_chars_lst2 = 0;

    for (const std::basic_string<char>& str : lst1) {
        total_chars_lst1 += str.size();
    }

    for (const std::basic_string<char>& str : lst2) {
        total_chars_lst2 += str.size();
    }

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}