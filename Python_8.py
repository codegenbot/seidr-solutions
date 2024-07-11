```python
def sum_product():
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    if not numbers:
        return 0, 1
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product