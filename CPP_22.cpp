vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b) {
    return a == b;
}

int main() {
    list<any> values {1, 2, "hello", 3, "world"};

    vector<int> filtered_integers = filter_integers(values);

    for (int i : filtered_integers) {
        cout << i << " ";
    }

    return 0;
}