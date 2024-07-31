bool any_int(double a, double b, double c) {
    if ((int)a == a && (int)b == b && (int)c == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}

int main() {
    double a, b, c;
    // Read input values for a, b, c

    if (any_int(a, b, c)) {
        // Output if a, b, and c are integers and satisfy the condition
    } else {
        // Output if a, b, and c are not integers or do not satisfy the condition
    }

    return 0;
}