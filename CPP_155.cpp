{
    assert(issame({4, 5}, even_odd_count(123456789)));
    assert(issame({5, 0}, even_odd_count(24680)));
    assert(issame({0, 6}, even_odd_count(111111)));

    return 0;
}