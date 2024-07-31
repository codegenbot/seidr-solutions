bool any_int(double a, double b, double c) {
    if ((int)a == a && (int)b == b && (int)c == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}

int main() {
    // Test any_int function
    bool result = any_int(2.0, 1.0, 1.0);
    
    return 0;
}