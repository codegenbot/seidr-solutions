std::vector<std::string> numericalLetterGrade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        std::string letter = letterGrade(grade);
        result.clear();
        result.push_back(letter);  // Clear the vector before pushing a new string
    }
    return result;
}