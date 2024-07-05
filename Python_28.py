def concatenate_strings(strings):
    return "".join(strings)

def check(func):
    test_cases = [["abc", "def"], ["hello", " ", "world"], ["concatenate", " ", "strings"]]
    expected = ["abcdef", "hello world", "concatenate strings"]
    for i, case in enumerate(test_cases):
        assert func(case) == expected[i], f"Test case {i+1} failed"
    print("All test cases passed!")

check(concatenate_strings)