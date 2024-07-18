std::vector<std::string> solution_name::odd_count(const std::vector<std::string>& input) {
    std::vector<std::string> result;
    for (const std::string& num : input) {
        result.push_back("the number of odd elements " + std::to_string(solution_name::count_odd_digits(num)) +
                         "\nthe string " + num + " of the input.");
    }
    return result;
}