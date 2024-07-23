int main{
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    std::cout << "[";
    for(auto num: removeDuplicates(numbers)){
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;
}