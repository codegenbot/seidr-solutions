def below_zero(operations):
    if not operations:
        return "No input provided."  
    negative_count = sum(1 for num in operations if num < 0)
    return negative_count or "No negative numbers found."