if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    sum_result, product_result = sum_product(numbers)
    print(sum_result, product_result)