vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(typeid(int) == val.type()){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

int main(){
    // Main function code here
    return 0;
}