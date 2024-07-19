#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

std::vector<std::string> by_length(std::initializer_list<int> numbers) {
    std::vector<int> vec(numbers.begin(), numbers.end());
    
    for (int num : vec) {
        if (num >= 1 && num <= 9) {
            numbers = {num};
        }
    }

    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());

    std::vector<std::string> result;
    for (int num : vec) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }

    return result;