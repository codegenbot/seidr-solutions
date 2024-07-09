```cpp
int main 
{
    std::string s = "((hello), (world))";
    std::vector<std::string> result = separate_paren_groups(s);
    
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
}