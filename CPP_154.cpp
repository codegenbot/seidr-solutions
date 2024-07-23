if(a.size() != b.size()) return false;
    std::string s = a + a;
    return s.find(b) != std::string::npos;
}