bool issame(vector<any> values) {
    bool result = true;

    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value)) continue;
        bool is_true = boost::any_cast<bool>(value);
        result &= is_true;
    }

    return result;
}