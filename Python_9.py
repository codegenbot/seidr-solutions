numbers = []
try:
    while True:
        num = input("Enter a number or type 'stop' to end: ").strip()
        if num.lower() == 'stop':
            break
        if num.replace("-", "", 1).isdigit():
            numbers.append(int(num))
        else:
            print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    pass