bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(histogram("a") == ((map<char,int>{{'a', 1}})));
    // Rest of your code...
}