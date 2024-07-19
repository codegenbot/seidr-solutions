#include <algorithm>
#include <vector>
using namespace std;

std::string find_max(vector<string> words){
    std::string max = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    return max;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}