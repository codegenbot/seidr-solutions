std::vector<std::string> gradeScale(std::vector<float> grades) {
    std::vector<std::string> letters;
    for (float grade : grades) {
        if (grade >= 4.0) {
            letters.push_back("A+");
        } else if (grade > 3.7) {
            letters.push_back("A");
        } else if (grade > 3.3) {
            letters.push_back("A-");
        } else if (grade > 3.0) {
            letters.push_back("B+");
        } else if (grade > 2.7) {
            letters.push_back("B");
        } else if (grade > 2.3) {
            letters.push_back("B-");
        } else if (grade > 2.0) {
            letters.push_back("C+");
        } else if (grade > 1.7) {
            letters.push_back("C");
        } else if (grade > 1.3) {
            letters.push_back("C-");
        } else if (grade > 1.0) {
            letters.push_back("D+");
        } else if (grade > 0.7) {
            letters.push_back("D");
        } else if (grade > 0.0) {
            letters.push_back("D-");
        } else {
            letters.push_back("F");
        }
    }
    return letters;
}