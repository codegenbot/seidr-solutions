def calculate_average():
    total = 0
    count = 0
    
    while True:
        try:
            num = float(input("Enter a number (or 'stop' to finish): "))
            if num == 'stop':
                break
            total += num
            count += 1
        except ValueError:
            print("Invalid input. Please enter numeric values or type 'stop' to finish.")
    
    if count == 0:
        return "No numbers entered."
    else:
        return f"Average: {total / count:.2f}"