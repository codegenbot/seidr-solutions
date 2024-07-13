def total_expenses(expenses: List[List[int]]) -> int:
    total = 0
    for expense in expenses:
        total += sum(expense)
    return total