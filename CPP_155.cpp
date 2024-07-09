for (char c : str) {
    if (stoi(std::string(1, c)) % 2 == 0)
        result[0]++;
    else
        result[1]++;
}