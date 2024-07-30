# Accept input from the user
lst = list(map(int, input().split()))

def double_the_difference(lst):
    return sum(num**2 for num in lst if num > 0 and num % 2 != 0)

# Call the function with the defined 'lst'
result = double_the_difference(lst)
print(result)