#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> intersperse(std::vector<int> numbers, int delimeter); 

    vector<int> intersperse(vector<int> numbers, int delimeter){ 
        vector<int> result;
        for(int i = 0; i < numbers.size(); i++){
            result.push_back(numbers[i]);
            if(i != numbers.size() - 1){
                result.push_back(delimeter);
            }
        }
        return result;
    }

    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
}