
def issame(vector<int> a, vector<int> b) {
    return all(x in a for x in b) and all(x in b for x in a);
}

assert (issame({4, 3, 2, 8}, {}) == true);