string concat = a + a;
    if (concat.find(b) != string::npos) {
        return true;
    }
    return false;
}