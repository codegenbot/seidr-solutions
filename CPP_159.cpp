#include <vector>

vector<int> eat(int number, int need, int remaining){
    int total = number + need;
    int eaten = min(total, remaining);
    return {eaten, max(0, remaining - eaten)};
}