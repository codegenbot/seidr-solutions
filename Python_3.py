if has_debt.lower() == "yes":
    while balance > 0:
        try:
            amount_to_pay = int(input("How much would you like to pay off today? "))
            if not isinstance(amount_to_pay, int) or amount_to_pay <= 0:
                print("Invalid payment! Please enter a positive integer.")
                continue
            balance -= amount_to_pay
            while balance < 0:  
                try:
                    debt_payment = int(input("How much would you like to pay off today? "))
                    if not isinstance(debt_payment, int) or debt_payment <= 0:
                        print("Invalid payment! Please enter a positive integer.")
                        continue
                    balance += debt_payment  
                except ValueError:
                    print("Invalid input! Please enter an integer.")
        else:
            if balance >= 0:
                print("Congratulations, your debt is paid off!")