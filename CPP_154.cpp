bool cycpattern_check(string a, string b) {
    int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    string combined = a + a;
    
    return combined.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
   
    return 0;
}