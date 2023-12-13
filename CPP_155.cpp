[PYTHON]
def issame(a: vector<int>, b: vector<int>) -> bool:
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a[i] != b[i]:
            return False
    return True

def even_odd_count(num: int) -> vector<int>:
    count_even = [0, 0]
    while num > 0:
        if num % 2 == 0:
            count_even[0] += 1
        else:
            count_even[1] += 1
        num //= 10
    return count_even

def main() -> int:
    assert(issame(even_odd_count(0), [1, 0]));
    assert(issame(even_odd_count(123456789), [9, 0]));
    return 0
[/PYTHON]
[TESTS]
# Test case 1:
assert issame([], []) == True
# Test case 2:
assert issame([1], [1]) == True
# Test case 3:
assert issame([1, 2, 3], [1, 2, 3]) == True
# Test case 4:
assert issame([1, 2, 3], [1, 2, 4]) == False
# Test case 5:
assert issame([1, 2, 3], [1, 2, 3, 4]) == False
[/TESTS]
```