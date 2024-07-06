def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# User input
lst = list(map(int, input().split()))

# Call function with user input
print(double_the_difference(lst))