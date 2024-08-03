int main(){
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{0}));
    assert(*(std::max_element(std::vector<int>{1, 2, 3, -23, 243, -400, 0}.begin(), std::vector<int>{1, 2, 3, -23, 243, -400, 0}.end()) == 243);
    return 0;
}