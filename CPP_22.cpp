vector<int> filter_integers(list_any values){
    vector<int> integers;

    for (auto value : values) {
        if (auto integer = boost::any_cast<int>(&value)) {
            integers.push_back(*integer);
        }
    }

    return integers;
}