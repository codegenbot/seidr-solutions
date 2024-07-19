float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    cout << "Enter side A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;
    cout << "Enter side C: ";
    cin >> c;
    if (triangle_area(a, b, c) == -1.0f) {
        cout << "The sides do not form a valid triangle." << endl;
    } else {
        cout << "The area of the triangle is: " << triangle_area(a, b, c) << endl;
    }
    return 0;
}