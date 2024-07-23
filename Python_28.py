def calculate_total_cost(prices: List[float], quantities: List[int]) -> float:
    total_cost = 0
    for i in range(len(prices)):
        total_cost += prices[i] * quantities[i]
    return total_cost