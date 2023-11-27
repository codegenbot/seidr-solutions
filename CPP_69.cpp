#include <iostream>
#include <vector>

int search(const std::vector<int>& lst) {
    int maxFreq = -1;
    int result = -1;
    for(int i = 0; i < lst.size(); i++) {
        int freq = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                freq++;
            }
        }
        if(freq >= lst[i] && lst[i] > maxFreq){
            maxFreq = lst[i];
            result = lst[i];
        }
    }
    return result;
}

int main() {
    std::cout << search({3, 10, 10, 9, 2}) << std::endl;
    std::cout << search({1, 2, 3, 3, 3, 4, 5, 6}) << std::endl;

    return 0;
}