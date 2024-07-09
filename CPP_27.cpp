int main() {
    std::string expected = "theSE Violent Delights Have Violent Ends";
    assert(flip_case("These violent delights have violent ends").compare(expected) == 0);
    return 0;
}