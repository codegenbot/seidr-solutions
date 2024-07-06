```cpp
vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open_count = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    while (open_count > 0) {
        current_group += '(';
        open_count--;
    }

    if (open_count > 0) {
        result.push_back(current_group);
    }

    return result;