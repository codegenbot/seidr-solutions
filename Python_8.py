from typing import List, Tuple

def get_user_input() -> List[int]:
    return list(map(int, input().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    product = 0
    try:
        product = eval("*".join(map(str, numbers)))
    except ZeroDivisionError:
        pass
    return (total_sum, product)

numbers = get_user_input()
result = sum_product(numbers)
print(result)