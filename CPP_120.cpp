int main
{
    if(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), std::vector<int>())) {
        printf("Test Passed\n");
    } else {
        printf("Test Failed\n");
    }
    return 0;
}