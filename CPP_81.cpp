bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float g : grades) {
        string letter;
        if (g >= 4.0) {
            letter = "A+";
        } else if (g > 3.7) {
            letter = "A";
        } else if (g > 3.3) {
            letter = "A-";
        } else if (g > 3.0) {
            letter = "B+";
        } else if (g > 2.7) {
            letter = "B";
        } else if (g > 2.3) {
            letter = "B-";
        } else if (g > 2.0) {
            letter = "C+";
        } else if (g > 1.7) {
            letter = "C";
        } else if (g > 1.3) {
            letter = "C-";
        } else if (g > 1.0) {
            letter = "D+";
        } else if (g > 0.7) {
            letter = "D";
        } else if (g > 0.0) {
            letter = "D-";
        } else {
            letter = "E";
        }
        result.push_back(letter);
    }
    return result;
}