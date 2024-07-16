vector<int> depths;
    int maxDepth = 0, currentDepth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        } else if (c == ')') {
            currentDepth--;
        } else if (c == ' ') {
            depths.push_back(maxDepth);
            maxDepth = 0;
            currentDepth = 0;
        }
    }

    depths.push_back(maxDepth);

    return depths;
}