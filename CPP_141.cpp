int digit_count = 0;
bool has_dot = false;
size_t dot_index = file_name.find(".");
if (dot_index != string::npos) {
    has_dot = true;
    size_t pre_dot_len = dot_index;
    for (size_t i = 0; i < pre_dot_len; ++i) {
        if (isalpha(file_name[i])) {
            break;
        }
        else if (isdigit(file_name[i])) {
            ++digit_count;
            if (digit_count > 3) {
                return "No";
            }
        }
        else {
            return "No";
        }
    }

    size_t post_dot_len = file_name.size() - dot_index - 1;
    string ext = file_name.substr(dot_index + 1);
    string valid_exts[] = {"txt", "exe", "dll"};
    bool is_valid_ext = false;
    for (const auto& v : valid_exts) {
        if (ext == v) {
            is_valid_ext = true;
            break;
        }
    }

    return has_dot && is_valid_ext ? "Yes" : "No";
}
else {
    return "No";
}