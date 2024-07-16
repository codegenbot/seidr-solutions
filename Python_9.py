numbers = []
while True:
    try:
        num = input("Enter a number or type 'stop' to end: ").strip()
        if num == 'stop':
            break
        numbers.append(int(num))
    except ValueError:
        print("Invalid input. Please enter a valid number.")