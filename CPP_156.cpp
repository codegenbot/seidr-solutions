int test_roman_conversion(){
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(3999) == "mmmcmxcix");
    assert(int_to_mini_roman(49) == "xlix");
    assert(int_to_mini_roman(139) == "cxxxix");
    assert(int_to_mini_roman(726) == "dccxxvi");
    assert(int_to_mini_roman(2021) == "mmxxi");

    return 0;
}