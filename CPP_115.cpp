int main 
{
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}) == 8);
    int result = max_fill({{0,0,0},{0,1,0}});
    std::cout << "Maximum number of filled cells: " << result << std::endl;
    return 0;
}