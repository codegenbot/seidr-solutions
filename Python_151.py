def double_the_difference(list):
    return (
        sum(x**2 for x in list if x % 2 != 0 and x >= 0 and isinstance(x, int)) * 2
        if list
        else 0
    )

result = double_the_difference([3, 5, 7, -2, 9])
print(result)