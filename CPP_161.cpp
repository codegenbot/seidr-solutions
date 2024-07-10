int main() {
    cout << "Enter a string: ";
    std::string s;
    getline(cin, s);  
    std::cout << solve(s) << std::endl;  
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
    return 0;
}