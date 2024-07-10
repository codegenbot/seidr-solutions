char* c_str = file_name.c_str();
string extension = "";
for (int i = strlen(c_str) - 1; i > 0; i--) {
    if (c_str[i] == '.') {
        break;
    } else {
        extension += c_str[i];
    }
}