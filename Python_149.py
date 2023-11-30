def sorted_list(lst):
    return sorted(filter(lambda x: len(x) % 2 == 0, lst))

def check(func):
    # Test cases
    assert func(["aaa", "bb", "c", "dddd"]) == ["dddd", "bb"]
    assert func(["abc", "def", "ghi", "jklmno"]) == ["ghi", "jklmno"]
    assert func(["apple", "banana", "cherry", "kiwi"]) == ["apple", "banana", "cherry"]
    
    print("All test cases pass")

check(sorted_list)