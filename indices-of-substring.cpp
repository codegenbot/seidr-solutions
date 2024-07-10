#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0;
    
    while (end < text.size()) {
        if (text.substr(start, target.size()).compare(target) == 0) {
            result.push_back(start);
            start += target.size();
        } else if (start < end + target.size()) {
            start++;
        } else {
            start = end + 1;
            end = start;
        }
        
        end++;
    }
    
    return result;
}