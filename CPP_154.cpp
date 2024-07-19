string concatenated_string = a + a;
    if (a.size() != b.size()) {
        return false;
    }
    return concatenated_string.find(b) != string::npos;
}