#include <vector> 

std::pair<int, int> eat(int number, int need, int remaining) { 
    int total = number + need;
    int eaten = total > remaining ? total - remaining : total;
    int left = remaining >= total ? 0 : remaining - number;
    return {eaten, left};
}