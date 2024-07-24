bool cycpattern_check(const char* a, const char* b) {
    return (std::string(a) + std::string(a)).find(b) != std::string::npos;
}