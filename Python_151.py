def double_the_difference(input_lst, odd_sum=0):
    return (
        sum(x**2 for x in input_lst if x % 2 != 0 and x >= 0 and isinstance(x, int)) * 2
        if input_lst
        else 0
    )

result = double_the_difference([3, 5, 7, -2, 9])
print(result)