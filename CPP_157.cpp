int main() {
    assert(right_angle_triangle(2, 2, 10) == false);
    cout << "Input the lengths of three sides (a, b, c): ";
    float a, b, c;
    cin >> a >> b >> c;
    if (right_angle_triangle(a, b, c))
        cout << "The triangle is right-angled." << endl;
    else
        cout << "The triangle is not right-angled." << endl;