#include <vector>
#include <algorithm>
#include <map>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::vector<int> filtered_arr;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }

    std::sort(filtered_arr.rbegin(), filtered_arr.rend());

    std::map<int, std::string> num_to_string = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (int num : filtered_arr) {
        result.push_back(num_to_string[num]);
    }

    return result;
}

int main(){
    assert(issame(by_length({9, 4, 8}) , std::vector<std::string>{"Nine", "Eight", "Four"}));
    return 0;
}