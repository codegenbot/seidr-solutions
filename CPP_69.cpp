#include <iostream>
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

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        int x;
        std::cout << "Enter element "<<i+1<<": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    int maxOccurrence = search(lst);
    if(maxOccurrence != -1)
        std::cout << "The maximum occurrence is: " << maxOccurrence << std::endl;
    else
        std::cout << "No element occurs more than once." << std::endl;

    return 0;
}