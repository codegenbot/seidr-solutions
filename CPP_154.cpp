if(a.size() != b.size()) return false;
    string concat = a + a;
    for(int i=0; i<a.size(); i++) {
        if(concat.substr(i, b.size()) == b) {
            return true;
        }
    }
    return false;
}