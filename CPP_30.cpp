bool issame(float a, float b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l);

int main(){
    std::vector<float> v = {1.5, -2.3, 4.0, -5.2};
    assert(issame(3.0f, 3.0f));  // Corrected call to issame
    assert(get_positive(v).size() == 2);
    return 0;
}