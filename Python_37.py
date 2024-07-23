```
def check(lst):
    even = sorted([x for x in lst if x % 2 == 0])
    odd = sorted([x for x in lst if x % 2 != 0])
    return (even, odd)

numbers = [1, 2, 3, 4]
print(check(numbers))