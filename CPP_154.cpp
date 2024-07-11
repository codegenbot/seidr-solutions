if (a.size() != b.size()) {
        return false;
    }
    
    string combined = a + a;
    
    return combined.find(b) != string::npos;
}