int main() {
    int index = pluck({7, 9, 7, 1});
    std::vector<int> emptyVector;

    if (index % 2 == 0 || index == -1) 
        assert(compareVectors({}, emptyVector)); 

    return 0;
}