int main() {
    vector<float> grades = {0.0, 0.7};
    vector<string> result = numerical_letter_grade({0.0, 0.7}); 
    assert(checkSame(vector<string>(result.begin(), result.end())) == true);
    return 0;
}