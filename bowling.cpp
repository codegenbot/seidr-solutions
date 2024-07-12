int total = 0, i = 0;
std::string s = "X7/9-X-88/-6XXX81"; // Sample input for demonstration

total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0') : (s[i + 2] == '-' ? 0 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0'))));