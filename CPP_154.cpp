if (a.length() != b.length()) {
        return false;
    }
    
    string concatenated = a + a;
    
    return concatenated.find(b) != string::npos;
}