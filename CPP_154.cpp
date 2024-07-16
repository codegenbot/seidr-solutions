for (int i = 0; i < b.length(); ++i) {
        if (a.find(b) != string::npos) {
            return true;
        }
        rotate(b.begin(), b.begin() + 1, b.end());
    }
    return false;
}