{
bool any_int(double a, double b, double c) {
    if ((int)a == a && (int)b == b && (int)c == c) {
        if (a == b + c || b == a + c || c == a + b) {
            return true;
        }
    }
    return false;
}

int main() {
    double a = 3.0, b = 4.0, c = 5.0;
    if (any_int(a, b, c)) {
        return 1;
    } else {
        return 0;
    }
}
}