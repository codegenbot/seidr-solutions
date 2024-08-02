def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2


# Read input from the user
lst = list(map(int, input().split()))
odd_sum = int(input())

# Call the function with the correct arguments
result = double_the_difference(lst, odd_sum)
print(result)