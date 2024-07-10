int main() {
    cout << "Enter a string: ";
    std::string s;
    getline(cin, s);  
    std::cout << solve(s) << std::endl;  
    return 0;
}