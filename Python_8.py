from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list) or len(numbers) == 0:
        return None

    try:
        total_sum = 0
        product = 1

        for num in numbers:
            if not isinstance(num, int):
                raise ValueError
            total_sum += num
            product *= num

        return total_sum, product
    except Exception as e:
        print(f"An error occurred: {e}")
        return None