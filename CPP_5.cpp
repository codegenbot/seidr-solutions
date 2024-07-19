#include <vector>

template <typename T>
vector<T> intersperse(vector<T> numbers, T delimiter){
    vector<T> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimiter);
        }
    }
    return result;
}