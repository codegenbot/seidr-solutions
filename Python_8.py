if __name__ == "__main__":
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    result = sum_product(numbers)
    print(*result)