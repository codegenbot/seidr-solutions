#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> count;  
    for (int num : lst) {
        if (count.find(num) == count.end()) {
            count[num] = 1;
        } else {
            count[num]++;
        }
    }

    int maxVal = -1;
    int maxFreq = 0;
    for (auto p : count) {  
        if(p.second > maxFreq) {
            maxFreq = p.second; 
            maxVal = p.first; 
        }
    }

    return maxVal;
}