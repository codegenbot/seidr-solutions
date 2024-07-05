string fix_spaces(string text) {
    string result;
    int space_count = 0;

    for (char ch : text) {
        if (ch == ' ') {
            space_count++;
        } else {
            if (space_count > 2) {
                result += '-';
            } else {
                result.append(space_count, '_');
            }
            result += ch;
            space_count = 0;
        }
    }
    
    if (space_count > 2) {
        result += '-';
    } else {
        result.append(space_count, '_');
    }

    return result;
}