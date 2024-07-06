```c
#ifndef PROBLEM_H
#define PROBLEM_H

int skjkasdkd(std::vector<int> lst);

#endif // PROBLEM_H

#include "problem.h"
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i<=n; i++) {
        if(n%i == 0) return false;
    }
    return true;

}

int skjkasdkd(std::vector<int> lst) {
    int sum = 0;
    std::vector<int>::iterator it;
    for (it = lst.begin(); it != lst.end();++it) {
        if (!isPrime(*it)) continue; 
        int n = *it;
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
    }
    return sum;
}

#include "problem.h"
#include <iostream>

int main() {
    assert(skJkasdkd({127, 97, 8192}) == 10);
    std::cout << "Test passed!" << std::endl;
    return 0;
}