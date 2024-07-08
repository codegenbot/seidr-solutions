int main
{
    std::vector<int> array = {21, 14, 23, 11};
    array = sort_array(array);
    if (array.size() % 2 == 1) {
        std::cout << "Sum of first and last elements is odd: ";
    } else {
        std::cout << "Sum of first and last elements is even: ";
    }
    std::cout << array[0] + array.back() << std::endl;
    
}