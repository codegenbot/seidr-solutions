def calculate_total_cost(items: List[dict]) -> float:
    total_cost = 0
    for item in items:
        total_cost += item['price'] * item['quantity']
    return total_cost