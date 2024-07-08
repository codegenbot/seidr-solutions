def increment_list(l):
    return [x + 1 for x in l]

def check(increment_list):
    n = [1, 2, 3]
    result = increment_list(n)
    assert result == [2, 3, 4]
    print("Test passed!")

check(increment_list)