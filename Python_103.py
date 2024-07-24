def rounded_avg():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                print(-1)
                break
            avg = round((n + m) / 2)
            return bin(avg)[2:]
        except ValueError:
            print("Invalid input. Please enter integers.")