#include <vector>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i <= numbers.size(); i++) { 
        if (i > 0) {
            result.push_back(delimiter);
        }
        if(i < numbers.size()) { 
            result.push_back(numbers[i]);
        }
    }
    result.push_back(delimiter); // add this line
    return result;
}