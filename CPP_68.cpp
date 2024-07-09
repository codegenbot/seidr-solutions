int main(){
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {1, 2, 3, 6, 5};

    std::vector<int> result = pluck(test1);

    assert(result[0] == 2);
    assert(result[1] == 1);

    assert(issame(test1, test2) == false);
    assert(issame(test1, test1) == true);

    return 0;
}