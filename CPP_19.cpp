#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string token;
    
    // Tokenize the input string
    istringstream iss(numbers);
    while (getline(iss, token, ' ')) {
        numVec.push_back(token);
    }
    
    // Sort the vector of strings
    sort(numVec.begin(), numVec.end());
    
    // Join the sorted strings back into a single string
    string result;
    for (const auto& s : numVec) {
        result += s + " ";
    }
    
    return result;
}