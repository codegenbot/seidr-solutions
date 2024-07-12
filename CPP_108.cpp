#include <iostream>
#include <cassert>

int count_nums(int* nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*nums >= 0) {
            int sum = 0;
            while (*nums > 0) {
                sum += abs(*nums % 10);
                *nums /= 10;
            }
            if (sum % 2 != 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (*nums < 0) {
                sum += abs(*nums % 10);
                *nums /= 10;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int nums, size = 0;
    std::cin >> size; // Read the number of integers
    for(int i = 0; i < size; i++) {
        int num;
        std::cin >> num; // Read each integer and store it in an array
        int* array = new int[size]; 
        array[i] = num; 
    }

    int count = count_nums(array, size); // Calculate the count
    delete[] array; // Free dynamically allocated memory

    return count;
}