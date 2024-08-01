
vector<int> filter_integers(const list<any>& values){
    vector<int> integers;
    for(const auto& val : values){
        if(val.type() == typeid(int)){
            integers.push_back(any_cast<int>(val));
        }
    }
    return integers;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}) ,{3, 3, 3}));
    return 0;
}