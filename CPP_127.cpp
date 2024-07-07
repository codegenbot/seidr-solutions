std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    if (interval1.first > interval2.second || interval2.first > interval1.second)
        return "no";
    else
        return std::to_string(std::max({interval1.first, interval2.first})) + " " + std::to_string(std::min({interval1.second, interval2.second}));