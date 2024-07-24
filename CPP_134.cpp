size_t pos = 0;
while (pos < line.size() && std::isspace(line[pos])) {
    ++pos;
}

if (pos == line.size())
    line.clear();
else
    line.erase(pos, 1);

if (check_if_last_char_is_a_letter(line)) {
    std::cout << "The last character of the input string is a letter.\n";
} else {
    std::cout << "The last character of the input string is not a letter.\n";
}