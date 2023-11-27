#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst = {3, 10, 10, 9, 2};
    int maxFreq = -1;

    for(int i = 0; i < lst.size(); i++){
        int freq = 0;

        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                freq++;
            }
        }

        if(freq >= lst[i] && lst[i] > maxFreq){
            maxFreq = lst[i];
        }
    }

    std::cout << maxFreq << std::endl;

    return 0;
}