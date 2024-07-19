bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    std::vector<int> array1 = {3, 1, 4, 1, 5, 9};
    std::vector<int> array2 = {3, 1, 4, 1, 5, 9};

    ASSERT_VECTOR_EQ(array1, array2);

    std::vector<int> sorted_array = sort_array(array1);

    return 0;
}