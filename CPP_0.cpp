int main{
    vector<float> numbers = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f, 0};
    assert(has_close_elements(numbers, 0.5) == false);
    
    vector<float> numbers2 = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    assert(has_close_elements(numbers2, 0.5) == false);
    
    return 0;
}