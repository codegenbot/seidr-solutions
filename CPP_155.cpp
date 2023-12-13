[PYTHON]
def issame(num1, num2):
    return num1 == num2

def even_odd_count(num):
    count_even = 0
    count_odd = 0
    while num > 0:
        if num % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
        num //= 10
    return [count_even, count_odd]

def main():
    assert issame(even_odd_count(0), {1, 0})
    assert issame(even_odd_count(123456789), {9, 0})
    return 0
[/PYTHON]
[TESTS]
# Test case 1:
assert main() == 0
[/TESTS]

```