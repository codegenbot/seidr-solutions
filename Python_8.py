def calculate_statistics():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter only integers.")
        return
    total_sum, product = sum_product(numbers)
    print(f"Sum: {total_sum}, Product: {product}")


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)