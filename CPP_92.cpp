{
    bool any_int(float a, float b, float c) {
        if ((int)a == a && (int)b == b && (int)c == c) {
            if (a == b + c || b == a + c || c == a + b) {
                return true;
            }
        }
        return false;
    }
}

int main() {
    float a = 5.0f;
    float b = 3.0f;
    float c = 2.0f;

    if (any_int(a, b, c)) {
        // Do something if the condition is met
    }

    return 0;
}