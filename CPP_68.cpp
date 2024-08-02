#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    auto it = min_element(arr.begin(), arr.end(),
        [](int a, int b){return (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0);});
    
    if(*it % 2 == 0) {
        result = {{*it, distance(arr.begin(), it)}};
    } else {
        auto first_even_it = find_if(arr.begin(), arr.end(),
            [](int x){return x % 2 == 0;});
        
        vector<int> even_numbers;
        for(auto i = arr.begin(); i != arr.end(); ++i) {
            if(*i % 2 == 0)
                even_numbers.push_back(*i);
        }
        
        result = {{even_numbers[0], distance(arr.begin(), first_even_it)}};
    }
    
    return result;
}