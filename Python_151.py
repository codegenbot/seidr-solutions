def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2

lst = list(map(int, input("Enter space-separated integers separated by spaces: ").split()))
odd_sum = int(input("Enter an odd number: "))

result = double_the_difference(lst, odd_sum)
print(result)