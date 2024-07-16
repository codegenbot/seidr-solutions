def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = list(map(int, input().split()))  # Read input list
result = double_the_difference(lst)  # Call the function with input list
print(result)  # Print the result