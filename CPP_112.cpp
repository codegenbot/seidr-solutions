int main() {
    auto [result, isCorrect] = reverse_delete("mamma", "mia");
    std::vector<std::string> expectedResult = {"", "True"};
    assert(issame(result, expectedResult));  
    return 0;
}