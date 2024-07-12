try:
    numbers = [int(num) for num in input("Enter space-separated numbers: ").split() if num.isdigit()]
    result_sum, result_product = sum_product(numbers)
    print(result_sum, result_product)
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")