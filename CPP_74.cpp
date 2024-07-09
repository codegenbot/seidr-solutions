#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string>) {
    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        int sum1 = 0, sum2 = 0;
        for (const auto& s : lst1) {
            sum1 += s.length();
        }
        for (const auto& s : lst2) {
            sum2 += s.length();
        }
        if (sum1 < sum2) return lst1;
        else if (sum1 > sum2) return lst2;
        else return lst1;
    }

int main() {
    std::vector<std::string> vec1; 
    std::vector<std::string> vec2;  
    bool result = total_match(vec1,vec2);  
    return 0;
}