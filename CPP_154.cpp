int main() {
    assert(cycpattern_check("winemtt", "tinemtt") == true);
    assert(cycpattern_check("abcdef", "defabc") == true);
    assert(cycpattern_check("hellohello", "ohell") == true);
    assert(cycpattern_check("software", "soft") == false);
    assert(cycpattern_check("programming", "ingpro") == false);
    assert(cycpattern_check("abc", "cab") == true);
    assert(cycpattern_check("xyz", "zxy") == true);
    
    return 0;
}