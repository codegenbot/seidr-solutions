string temp = a + a;
    if (temp.find(b) != string::npos) {
        return true;
    }
    return false;
}