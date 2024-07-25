std::string solve(const std::string& s) {
    std::string result = s;
    for (int i = 0; i < result.length(); i++) {
        if (isalpha(result[i])) {
            if (islower(result[i])) {
                result[i] = toupper(result[i]);
            } else {
                result[i] = tolower(result[i]);
            }
        }
    }
    int left = 0, right = result.length() - 1;
    while (left < right) {
        std::swap(result[left], result[right]);
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}