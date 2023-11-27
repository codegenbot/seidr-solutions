vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<value.type()>(value) && issame<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
} 

 template <typename T>
 bool issame(T){
    return true;
}

int main() {
    list<any> values{1, "two", 3, "four", 5};
    vector<int> filtered_values = filter_integers(values);
    for (int value : filtered_values) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}