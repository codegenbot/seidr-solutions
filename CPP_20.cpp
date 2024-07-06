if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(std::abs(a[i]-b[i]) > 0.1f) return false;
    }
    return true;
}