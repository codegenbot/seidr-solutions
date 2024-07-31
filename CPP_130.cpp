bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(tri(2), {3, 1}));
    
    return 0;
}