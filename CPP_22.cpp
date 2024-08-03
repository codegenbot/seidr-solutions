vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int)){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b);

int main() {
    list<any> values = {10, 20, "hello", 30, 40};
    vector<int> integers = filter_integers(values);
    vector<int> expected_integers = {10, 20, 30, 40};
    assert(issame(integers, expected_integers));
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}