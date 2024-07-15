def double_the_difference(lst):
    return sum((x * 2) for x in lst if x > 0 and x % 2 != 0) if lst is not None else 0

try:
    lst = list(map(int, input().split()))
    result = double_the_difference(lst)
    print(result)
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")