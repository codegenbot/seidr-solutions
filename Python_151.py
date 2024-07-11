```
def check(input_list):
    lst = list(map(int, input("Enter a list of integers (space-separated): ").split()))
    odd_sum = sum(1 for x in lst if x % 2 != 0)
    result = double_the_difference(lst)
    if result == odd_sum:
        print("The difference is doubled.")
    else:
        print("The difference is not doubled.")

def double_the_difference(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return total * 2 if total > 0 else 0