vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto& value : values) {
        try {
            if (value.type() == typeid(int)) {
                result.push_back(boost::any_cast<int>(value));
            }
        } catch (const boost::bad_any_cast&) {
            // Ignore cast failures
        }
    }
    return result;
}