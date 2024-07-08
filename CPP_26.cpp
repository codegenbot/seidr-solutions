#include <set>
bool std::operator==(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++)if(a[i]!=b[i])return false;
    return true;
}

std::vector<std::vector<int>> remove_duplicates(std::vector<std::vector<int>> numbers) {
    std::set<std::vector<int>> s;

    for (int i = 0; i < numbers.size(); i++) {
        if (!s.count(numbers[i])) {
            s.insert(numbers[i]);
        }
    }

    return std::vector<std::vector<int>>(s.begin(), s.end());
}