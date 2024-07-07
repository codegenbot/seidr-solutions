int findPattern(const std::string& s); 

int main() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    int result = findPattern("You and I are going for a walk");
    std::cout << "Result: " << result << std::endl;
    return 0;
}