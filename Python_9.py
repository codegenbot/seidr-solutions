numbers = []
while True:
    num = input("Enter a number or type 'stop' to end: ").strip()
    if num == 'stop':
        break
    if num:
        try:
            numbers.append(int(num))
        except ValueError:
            print("Invalid input. Please enter a valid number.")
    else:
        print("Invalid input. Please enter a valid number.")