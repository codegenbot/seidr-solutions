def calculate_total_expenses():
    expenses = []
    while True:
        category = input("Enter expense category (or 'stop' to finish): ")
        if category.lower() == 'stop':
            break
        amount = float(input("Enter the expense amount: "))
        expenses.append((category, amount))
    return calculate_total_expenses(expenses)

def main():
    print(calculate_total_expenses())

if __name__ == "__main__":
    main()