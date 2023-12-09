[PYTHON]
def issame(a: list, b: list) -> bool:
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a[i] != b[i]:
            return False
    return True

def incr_list(l1: list) -> list:
    return [x + 1 for x in l1]

if __name__ == "__main__":
    v1 = incr_list([5, 2, 5, 2, 3, 3, 9, 0, 123])
    if issame(v1, [6, 3, 6, 3, 4, 4, 10, 1, 124]):
        print("The vectors are equal.")
    else:
        print("The vectors are not equal.")
[/PYTHON]
[TESTS]
# Test case 1:
assert issame([], []) == True
# Test case 2:
assert issame([1, 2, 3], [1, 2, 3]) == True
# Test case 3:
assert issame([1, 2, 3], [4, 5, 6]) == False
# Test case 4:
assert incr_list([]) == []
# Test case 5:
assert incr_list([1, 2, 3]) == [2, 3, 4]
[/TESTS]
