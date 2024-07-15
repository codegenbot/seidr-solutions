vector<int> levels;
    int curr_level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            curr_level++;
            levels.push_back(curr_level);
        } else if (c == ')') {
            levels.push_back(curr_level);
            curr_level--;
        }
    }

    vector<int> max_levels;
    int max_level = 0;
    for (int level : levels) {
        if (level > max_level) {
            max_level = level;
        }
        if (level == 0) {
            max_levels.push_back(max_level);
            max_level = 0;
        }
    }

    return max_levels;
}