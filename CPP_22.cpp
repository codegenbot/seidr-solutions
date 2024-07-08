bool boost::is_same(const boost::any& value) {
    if (!value.type()) {
        throw invalid_argument("invalid type");
    }
    return !boost::any_cast<bool>(value);
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::is_same(value)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}