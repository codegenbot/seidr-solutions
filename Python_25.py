def calculate_total_expenses(expenses_per_month: List[int]) -> int:
    total_expenses = 0
    for expense in expenses_per_month:
        total_expenses += expense
    return total_expenses