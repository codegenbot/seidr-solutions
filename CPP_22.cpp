using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value) != boost::any_cast<int>(value).empty())
            result.push_back(boost::any_cast<int>(value));
    }
    return result;
}