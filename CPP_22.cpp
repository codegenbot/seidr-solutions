vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any_to-any_cast<int>(value).swap(result);
    }
    return result;
}