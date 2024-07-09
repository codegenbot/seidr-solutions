```
def calculate_total_expenses(expenses):
    total_expense = 0
    for category, amount in expenses:
        total_expense += amount
    return total_expense

def main():
    print(calculate_total_expenses())

if __name__ == "__main__":
    main()