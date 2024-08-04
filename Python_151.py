def double_the_difference(odd_numbers):

    def helper(lst):
        return sum(x**2 for x in lst if x % 2 != 0 and x >= 0 and isinstance(x, int))

    return helper(odd_numbers) * 2 if odd_numbers else 0


result = double_the_difference([3, 5, 7, -2, 9])
print(result)