#include <algorithm>
#include <vector>
using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;
    
    for(int i=0; i < numbers.size(); i++){
        if(numbers[i] == ' '){
            numVec.push_back(temp);
            temp = "";
        }
        else{
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());
    
    string result = "";
    for(auto str : numVec) {
        result += str + " ";
    }

    return result;
}