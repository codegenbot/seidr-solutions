from typing import List


def calculate_total_cost(prices: List[int], quantity: int) -> float:
    total_cost = 0
    for price in prices:
        total_cost += price * quantity
    return total_cost