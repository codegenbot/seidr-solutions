def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    test_list = [1, 2, 3]
    result = func(test_list)
    assert result == [2, 3, 4], "Test failed"
    print("Test passed")

check(increment_list)