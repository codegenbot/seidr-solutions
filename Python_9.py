```
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