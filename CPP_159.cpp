#include<vector>
using namespace std;
vector<int> eat(int number,int need,int remaining) {
    number += need; // eat the required number of carrots
    if (number > remaining) {
        number = remaining; // if there are not enough remaining carrots, eat all remaining carrots
    }
    need -= (number - number/2); // eat half of the remaining carrots
    
    vector<int> result = {number, need}; // return number of eaten carrots and number of remaining carrots
    return result;
}