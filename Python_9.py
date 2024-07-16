numbers = []
while True:
    num = input("Enter a number or type 'stop' to end: ").strip()
    if num == 'stop':
        break
    try:
        if num:
            numbers.append(int(num))
        else:
            print("Invalid input. Please enter a valid number.")
    except ValueError:
        print("Invalid input. Please enter a valid number.")