int file_name_check(string filename) {
    size_t dot = filename.find('.');
    size_t space = filename.find(' ');
    if (dot == string::npos && space == string::npos)
        return "Yes";
    else if (dot != string::npos && space == string::npos)
        return "Yes";
    else
        return "No";
}