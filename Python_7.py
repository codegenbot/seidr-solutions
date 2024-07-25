```
tax_rate = float(input("Enter the tax rate (or press Enter for 0.08): ") or 0.08)
while True:
    try:
        tax_rate = float(tax_rate)
        break
    except ValueError:
        print("Invalid input. Please enter a valid number for tax rate.")