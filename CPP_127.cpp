std::string intersection(std::pair<int, int> interval1, std::pair<int, int> interval2) {
    int start = std::max(interval1.first, interval2.first);
    int end = std::min(interval1.second, interval2.second);

    std::string result;
    if (start <= end) {
        std::stringstream ss;
        ss << start << " " << end;
        result = ss.str();
    } else {
        result = "no";
    }
    return result;
}