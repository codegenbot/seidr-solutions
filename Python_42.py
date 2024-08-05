def check(func):
    sample_list = [1, 2, 3]
    result = func(sample_list)
    assert result == [2, 3, 4]
    print("Function is working correctly")

# Original code:
def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    sample_list = [1, 2, 3]
    result = func(sample_list)
    assert result == [2, 3, 4]
    print("Function is working correctly")

check(increment_list)