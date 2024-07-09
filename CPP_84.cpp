```c++
long long solve(int n) {
    std::string binary;
    while(n > 0) {
        if(n % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        n /= 2;
    }
    return binary.length() == 0 ? -1 : std::stoll(binary, nullptr, 2);
}