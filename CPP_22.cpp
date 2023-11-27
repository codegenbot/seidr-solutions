vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b){
    return a == b;
}

int main() {
    int a = 5;
    int b = 10;
    if (issame(a, b)) {
        cout << "a and b are the same" << endl;
    } else {
        cout << "a and b are not the same" << endl;
    }
    return 0;
}