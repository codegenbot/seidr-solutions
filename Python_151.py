
lst = list(map(int, input().split()))

def double_the_difference(lst):
    return sum(num**2 for num in lst if num > 0 and num % 2 != 0)

result = double_the_difference(lst)
print(result)