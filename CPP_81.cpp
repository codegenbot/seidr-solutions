int main 
{
    std::cout << "Enter the first grade: ";
    float grade1; std::cin >> grade1;
    std::cout << "Enter the second grade: ";
    float grade2; std::cin >> grade2;
    std::vector<float> grades = {grade1, grade2};
    std::vector<std::string> result = numerical_letter_grade({grade1, grade2});
    if (!assertSame(result, {"E", "C+"})) 
    {
        assert(false);
    }
    return 0;
}