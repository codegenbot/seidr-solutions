int main {
    std::string bracket_string = "<><><<><>><>>><>";
    assert(!correct_bracketing(bracket_string.c_str()));
    std::string brackets = "<<>";
    if(correct_bracketing(brackets.c_str())) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}