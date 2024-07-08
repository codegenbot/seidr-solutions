```cpp
namespace std {
    bool isSame(std::vector<std::string> v1, std::vector<std::string> vec) {
        if(v1.size() != vec.size())
            return false;
        
        for(int i=0; i<v1.size(); i++) {
            if(v1[i] != vec[i])
                return false;
        }
        
        return true;
    }

    std::vector<std::string> filter_by_substring(std::vector<std::string> vec, std::string sub) {
        std::vector<std::string> result;
        for(const auto& str : vec) {
            if(str.find(sub) != std::string::npos)
                result.push_back(str);
        }
        
        return result;
    }

    int main() {
        assert(isSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
        return 0;
    }
}