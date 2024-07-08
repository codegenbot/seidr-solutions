#include <initializer_list>
#include <vector>

namespace {
    bool MyOperator==(const customVector& a, const customVector& b){
        return a == b;
    }

    class customVector : public std::vector<int> {};

    customVector RemoveDuplicates(customVector numbers) {
        std::unordered_map<int, bool> mp;
        customVector result;

        for (int i = 0; i < numbers.size(); i++) {
            if (!mp.count(numbers[i])) {
                mp[numbers[i]] = true;
                result.push_back(numbers[i]);
            }
        }

        return result;
    }
}