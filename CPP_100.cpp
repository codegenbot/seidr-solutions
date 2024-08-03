#include <vector>
vector<int> stones;
while(n > 0){
    stones.push_back(n);
    n = (n % 2 == 0) ? n + 1 : n + 2;
}
return stones;