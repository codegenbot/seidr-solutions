#include <iostream>
#include <cassert>

int max_fill(int[][4], int) ;  // Function declaration

int main() 
{
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 4) == 8);
    int result = max_fill({{0,0,0},{0,1,0}}, 2);
    std::cout << "Maximum number of filled cells: " << result << std::endl;
    return 0;
}

int max_fill(int[][4], int) 
{
    int max_count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (((i == 0 && j % 2 != 0) || (i == 1)) && ((i + j) % 2 == 0))
                max_count++;
        }
    }
    return max_count;
}