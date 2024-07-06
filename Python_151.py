def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# Read input from the user
lst = list(map(int, input().split()))

# Call the function with the input list
result = double_the_difference(lst)

# Print the result
print(result)