bool file_name_check(const std::string& file_name) {
    if (file_name.size() > 4 || file_name.find('.') != std::string::npos) {
        return false;
    }
    return true;
}