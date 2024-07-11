string combined = b + b;
    if (a.size() != b.size() || a.size() < 1) 
        return false;
    return combined.find(a) != string::npos;
}