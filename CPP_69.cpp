#include <vector>
#include <map>

int search(std::vector<int> lst){
    std::map<int, int> freq;
    for(int i : lst) {
        if(freq.find(i) == freq.end())
            freq[i] = 1;
        else
            freq[i]++;
    }
    for(auto p : freq) {
        if(p.second >= p.first)
            return p.first;
    }
    return -1;
}