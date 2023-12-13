[PYTHON]
def issame(a: vector<int>, b: vector<int>) -> bool:
    return a == b

def even_odd_count(num: int) -> vector<int>:
    count_even = 0
    count_odd = 0
    while num > 0:
        if num % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
        num //= 10
    return [count_even, count_odd]

def main() -> int:
    if issame(even_odd_count(0), {1, 0}) and issame(even_odd_count(123456789), {9, 0}):
        return 0
    else:
        return 1
[/PYTHON]
[TESTS]
# Test case 1:
assert main() == 0
[/TESTS]
