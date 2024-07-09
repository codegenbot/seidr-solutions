int cppMain() {
    _160 obj;
    assert(obj.do_algebra("*", {7, 3}) == 21);
    // Modified the test case here
    std::string ops = "//";
    assert(obj.do_algebra(ops, {5040, 10}) == 504);  
    return 0;
}