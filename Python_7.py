```
def calculate_total_cost(items: list[dict], tax_rate: float) -> float:
    total_cost = sum(item["price"] * item["quantity"] for item in items)
    return total_cost + (total_cost * tax_rate)