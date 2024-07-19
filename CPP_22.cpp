bool issame(vector<int> a, vector<int> b); // Declare the issame function

vector<int> filter_integers(list<any> values); // Declare the filter_integers function

bool issame(vector<int> a, vector<int> b){ // Correct function signature for issame
    return a == b;
}

vector<int> filter_integers(list<any> values){ // Correct the function signature
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}