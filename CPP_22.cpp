bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type()){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert (std::equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}).begin(), filter_integers({3, 'c', 3, 3, 'a', 'b'}).end(), vector<int>{3, 3, 3}.begin()));
    return 0;
}