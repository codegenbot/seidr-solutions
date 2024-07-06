def total_expenses(transactions: List[Tuple[str, int]]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for transaction in transactions:
        if transaction[1] > 0:
            total_sum += transaction[1]
            product *= transaction[1]
        else:
            total_sum -= transaction[1]
            product /= abs(transaction[1])
    return total_sum, int(product)