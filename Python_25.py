from typing import List

def calculate_total_cost(orders: List[dict]) -> float:
    total_cost = 0
    for order in orders:
        cost = (order['quantity'] * order['price'])
        total_cost += cost
    return total_cost