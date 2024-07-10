if (target.empty()) {
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        bool match = true;
        for (int j = 0; j < target.length(); ++j) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }
}