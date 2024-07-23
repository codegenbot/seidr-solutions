if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return true;
    else
        return false;
}
int main() {
    float a, b, c;
    cout << "Enter side 1: ";
    cin >> a;
    cout << "Enter side 2: ";
    cin >> b;
    cout << "Enter side 3: ";
    cin >> c;
    if (right_angle_triangle(a,b,c))
        cout << "It is a right angle triangle";
    else
        cout << "It is not a right angle triangle";
    return 0;
}