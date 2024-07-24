string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for (int i = 0; i < file_name.size(); i++) {
        char c = file_name[i];
        if (!found_dot && c == '.') {
            found_dot = true;
        } else if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                return "No";
            }
        } else if (found_dot && (c != 'a' && c != 'A' && c != 'b' && c != 'B' && 
                                   c != 'c' && c != 'C' && c != 'd' && c != 'D' &&
                                   c != 'e' && c != 'E' && c != 'f' && c != 'F' &&
                                   c != 'g' && c != 'G' && c != 'h' && c != 'H' &&
                                   c != 'i' && c != 'I' && c != 'j' && c != 'J' &&
                                   c != 'k' && c != 'K' && c != 'l' && c != 'L' &&
                                   c != 'm' && c != 'M' && c != 'n' && c != 'N' &&
                                   c != 'o' && c != 'O' && c != 'p' && c != 'P' &&
                                   c != 'q' && c != 'Q' && c != 'r' && c != 'R' &&
                                   c != 's' && c != 'S' && c != 't' && c != 'T' &&
                                   c != 'u' && c != 'U' && c != 'v' && c != 'V' &&
                                   c != 'w' && c != 'W' && c != 'x' && c != 'X' &&
                                   c != 'y' && c != 'Y' && c != 'z' && c != 'Z') {
            return "No";
        }
    }

    if (!found_dot || file_name.find(file_name) == -1 || 
       (file_name.size() > 4 && (file_name.substr(found_dot + 1).find("txt") == -1 &&
                                  file_name.substr(found_dot + 1).find("exe") == -1 &&
                                  file_name.substr(found_dot + 1).find("dll") == -1)) {
        return "No";
    }

    return "Yes";
}