#include <cassert> // Include cassert header

using namespace std;

vector<string> odd_count(vector<string> lst);

bool operator==(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int count = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + "\n the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}