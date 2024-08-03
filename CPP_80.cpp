void test_happy_strings() {
    assert(is_happy("iopaxioi") == false);
    assert(is_happy("abcde") == true);
    assert(is_happy("aabbcdef") == false);
    assert(is_happy("abab") == false);
}

int main() {
    test_happy_strings();

    return 0;
}