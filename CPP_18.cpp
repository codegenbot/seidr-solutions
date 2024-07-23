```cpp
int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substring, pos)) != std::string::npos) {
        if (pos + substring.size() > str.size()) {
            break; // exit the loop
        }
        ++count;
        pos += substring.size();
    }

    return count;
}

int main() {
    assert (how_many_times("john doe", "john") == 1);
    std::cout << how_many_times("hello world", "world") << std::endl;
    return 0;
}