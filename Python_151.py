def double_the_difference(numbers):
    odd_sum = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(
        (
            sorted([i for i in numbers if isinstance(i, int)]).pop(len(numbers) // 2)
            - odd_sum
        )
        * 2
    )


print(double_the_difference([1, 3, 5]))