#include <vector>
#include <map>
#include <algorithm>
#include <string>

void by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered_arr.push_back(num);
        }
    }

    std::sort(filtered_arr.begin(), filtered_arr.end());

    std::reverse(filtered_arr.begin(), filtered_arr.end());

    for (int num : filtered_arr) {
        result.push_back(num_to_name[num]);
    }
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    by_length({9, 4, 8});
    return 0;
}