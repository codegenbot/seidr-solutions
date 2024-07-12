```
def double_the_difference(lst):
    even_sum = sum(i for i in lst if i % 2 == 0)
    odd_sum = sum(i for i in lst if i % 2 != 0)
    difference = abs(even_sum - (10**6 - odd_sum)) if even_sum > (10**6 - odd_sum) else abs((10**6 - odd_sum) - even_sum)
    return difference * 2

def check(lst):
    result = double_the_difference(input("Enter a list of numbers: ").split())
    return result

print(check(input("Enter a list of numbers: ").split()))