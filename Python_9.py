def calculate_total_expenses(expenses):
    """
    Calculate total expenses.

    Args:
        expenses (list): A list of tuples, where each tuple contains the category and amount of expenses.

    Returns:
        float: The total amount of expenses.
    """
    total = 0
    for expense in expenses:
        total += expense[1]
    return total


expenses = []
while True:
    cat = input("Enter expense category (or 'done' if finished): ")
    if cat.lower() == "done":
        break
    amount = float(input("Enter expense amount: "))
    expenses.append((cat, amount))

print(f"Total expenses: {calculate_total_expenses(expenses)}")