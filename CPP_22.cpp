std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<boost::optional<int>>(value).has_value()) {
            int optionalInt = boost::any_cast<boost::optional<int>>(value).get();
            result.push_back(optionalInt);
        }
    }
    return result;