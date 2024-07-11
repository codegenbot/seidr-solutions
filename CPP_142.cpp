#include <vector>

int sum_squares(std::vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0) {
            lst[i] = lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            lst[i] = lst[i] * lst[i] * lst[i];
        }
        sum += lst[i];
    }
    return sum;
}

int cpp142_solution() {
    // Your code goes here

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int result = sum_squares(numbers);

    return result;
}