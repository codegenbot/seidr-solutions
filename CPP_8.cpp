// Fix the code by providing proper function signature for issame function
bool issame(std::pair<int, int> a, std::pair<int, int> b);

// Fix the code by including 'vector' in the function signature of issame function
bool issame(std::pair<int, int> a, std::pair<int, int> b);

// Fix the code by returning a boolean value from issame function
bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}