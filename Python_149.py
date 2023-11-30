def sorted_list(lst):
    return sorted(filter(lambda x: len(x) % 2 == 0, lst))

def check(func):
    # Test cases
    assert func(["hello", "world", "foobar", "spam"]) == ["foobar"]
    assert func(["py", "java", "cpp", "javascript"]) == ["cpp", "javascript"]
    assert func(["abc", "de", "fghi", "jklmno"]) == ["abc", "de", "jklmno"]
    assert func(["cat", "dog", "elephant", "lion"]) == ["elephant"]
    assert func([]) == []

check(sorted_list)