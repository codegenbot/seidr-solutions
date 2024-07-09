int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};
    
    assert(issame(vec1, vec2) == true);

    std::vector<int> vec3 = {5, 4, 3, 2, 1};
    
    assert(issame(vec1, vec3) == false);

    return 0;
}