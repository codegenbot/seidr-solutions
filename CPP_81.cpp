```cpp
bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main() {
    vector<float> grades = {3.5, 4.1, 2.9};
    vector<string> result = numerical_letter_grade(grades);
    bool same = issame({"B+", "A+", "C+"}, result);
    if (same)
        cout << "The output is as expected." << endl;
    else
        cout << "The output is not as expected." << endl;
    return 0;
}