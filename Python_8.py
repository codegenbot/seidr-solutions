def sum_product():
    numbers = [int(x) for x in input("Enter space-separated integers: ").split()]
    if len(numbers) == 0:
        return 0, 1
    else:
        total_sum = sum(numbers)
        product = 1
        for num in numbers:
            product *= num
        return total_sum, product