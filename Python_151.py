def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num**2
    return result


# read input from user
lst = list(map(int, input().split()))

# call the function with the input list
print(double_the_difference(lst))