vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<any> values, any value) {
    for (auto v : values) {
        if (v == value) {
            return true;
        }
    }
    return false;
}

int main() {
    list<any> values = {1, 2, 3, "hello", 4.5};
    vector<int> filtered = filter_integers(values);
    for (auto num : filtered) {
        cout << num << " ";
    }
    cout << endl;
    cout << issame(filtered, 3) << endl;
    cout << issame(filtered, "hello") << endl;
    return 0;
}