vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value, 0); // if this line doesn't throw, add to result
    }
    return result;
}