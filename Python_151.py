def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 == 1) * 2

print("Enter a list of integers separated by spaces:")
lst = list(map(int, input().split()))
print("Enter the sum of odd numbers:")
odd_sum = int(input())

result = double_the_difference(lst, odd_sum)
print(result)