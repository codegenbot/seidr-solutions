if __name__ == "__main__":
    numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
    result_sum, result_product = sum_product(numbers)
    print(result_sum, result_product)