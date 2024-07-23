int main()
{
    if(issame(std::vector<int>(), {1, 2, 3, -23, 243, -400, 0}), std::vector<int>())) {
        printf("Test Passed\n");
    } else {
        printf("Test Failed\n");
    }
    return 0;
}

int maximum(const std::vector<int>& vec, int index)
{
    return vec[index];
}

bool issame(std::vector<int> a, std::vector<int> b)
{
    return a == b;
}