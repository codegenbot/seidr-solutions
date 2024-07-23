def average_price(prices: List[float]) -> Tuple[float, float]:
    if not prices:
        return 0.0, 0.0
    total_cost = 0.0
    count = 0
    for price in prices:
        total_cost += price
        count += 1
    average = total_cost / count if count else 0.0
    min_price = min(prices) if prices else float('inf')
    return average, min_price