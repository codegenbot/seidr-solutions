def sum_product():
    numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)