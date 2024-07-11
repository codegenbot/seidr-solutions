if (a.length() != b.length()) {
        return false;
    }
    
    string combined = a + a;
    
    return combined.find(b) != string::npos;
}