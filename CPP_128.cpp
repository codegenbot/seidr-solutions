```cpp
int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        auto upper = [&s](char c){ return std::toupper(c); };
        s.erase(std::remove_if(s.begin(), s.end(), [](char c){ return !std::isalnum(c); }), s.end());
        s = std::string(std::transform(s.begin(), s.end(), s.begin(), upper).base(), s.size());
    }
    
    if (str1.empty() || str2.empty() || str3.empty()) return 0;
    if (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') return -1;
    return 1;
}

int main() {
    assert(prod_signs("-1", "1", "1") == 0);
    std::cout << prod_signs("-1", "1", "1") << std::endl; 
}