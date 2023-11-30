def sum_product():
    numbers = list(map(int, input().split(" ")))
    sum_result = numbers[0]
    product_result = numbers[0]
    for number in numbers[1:]:
        sum_result += number
        product_result *= number
    return sum_result, product_result

result = sum_product()
print(result)