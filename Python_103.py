def rounded_avg():
    try:
        n = int(input("Enter the first number: "))
        m = int(input("Enter the second number: "))
        avg = round((float(n) + float(m)) / 2.0)
        return format(avg, '09b')
    except ValueError:
        return "Invalid input."