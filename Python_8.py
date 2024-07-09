def sum_product():
    numbers = input("Enter space-separated integers: ")
    numbers = [int(num) for num in numbers.split()]
    if not numbers:
        return 0, 1
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    print(f"The sum is {total_sum} and the product is {product}.")