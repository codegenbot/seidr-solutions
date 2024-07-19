string combined = a + a;
    if (combined.find(b) != string::npos) {
        return true;
    }

    return false;
}