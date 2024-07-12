// leaders.h
#pragma once
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums);

// main.cpp
#include "leaders.h"
#include <iostream>

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    std::vector<int> result = findLeaders(numbers);

    std::cout << "Leaders: ";
    for (int leader : result) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;

    return 0;
}