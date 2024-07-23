#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int,int> countMap;
    int max = 0;
    for (int i : lst) {
        if(i > 0){
            if(countMap.find(i) != countMap.end()){
                countMap[i]++;
            } else{
                countMap[i] = 1;
            }
            if(i >= countMap[i]){
                max = i;
            }
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    std::vector<int> lst = {};
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        int val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        lst.push_back(val);
    }
    std::cout << "Maximum positive number that has a frequency equal to its value: " << search(lst) << std::endl;
    return 0;
}