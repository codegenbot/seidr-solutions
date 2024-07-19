if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    result = sum_product(numbers)
    print(result[0], result[1])