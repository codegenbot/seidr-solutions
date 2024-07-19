```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    for(int num : arr){
        if(num >= 1 && num <= 9){
            result.push_back({num, 0});
        }
    }

    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());

    std::vector<std::string> numbers;
    for(const auto &p : result){
        switch(p.first){
            case 1:
                numbers.push_back("One" + to_string(p.second));
                break;
            case 2:
                numbers.push_back("Two" + to_string(p.second));
                break;
            case 3:
                numbers.push_back("Three" + to_string(p.second));
                break;
            case 4:
                numbers.push_back("Four" + to_string(p.second));
                break;
            case 5:
                numbers.push_back("Five" + to_string(p.second));
                break;
            case 6:
                numbers.push_back("Six" + to_string(p.second));
                break;
            case 7:
                numbers.push_back("Seven" + to_string(p.second));
                break;
            case 8:
                numbers.push_back("Eight" + to_string(p.second));
                break;
            case 9:
                numbers.push_back("Nine" + to_string(p.second));
                break;
        }
    }

    return numbers;
}