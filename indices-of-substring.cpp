#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::pair<std::string, std::vector<int>> indicesOfSubstring(string text, string target) {
    int n = text.length();
    int m = target.length();

    std::vector<int> result;
    for(int i=0; i<n-m+1; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    std::pair<std::string, std::vector<int>> pair_result = {text, result};
    return pair_result;
}

int main() {
    string text, target;
    cin >> text >> target;
    cin.ignore(); 
    cin.ignore();
    
    std::pair<std::string, std::vector<int>> res = indicesOfSubstring(text, target);
    cout << "Text: " << res.first << endl;
    for (int i : res.second)
        cout << i << " ";
    return 0;
}