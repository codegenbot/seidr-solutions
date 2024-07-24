def rounded_avg():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return "Invalid input"
            avg = (n + m) / 2
            return format(int(avg), 'b')
        except ValueError:
            print("Invalid input. Please enter integers.")