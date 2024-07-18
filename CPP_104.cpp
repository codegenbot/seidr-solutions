bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

void main(){
    assert(issame({135, 103, 31}, {31, 135}));
}