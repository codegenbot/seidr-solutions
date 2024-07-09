```cpp
int main() {
    vector<float> grades = {4.0};
    vector<string> result = numerical_letter_grade(grades);
    if (issame({result[0]})) {
        for (string s : result) {
            if (s != "E") {
                return 1;
            }
        }
    }
    return 0;
}