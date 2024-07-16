numbers = []
try:
    while True:
        num = raw_input("Enter a number or type 'stop' to end: ").strip().lower()
        if num == 'stop':
            break
        if num.replace("-", "", 1).isdigit():
            numbers.append(int(num))
        else:
            print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    pass
except EOFError:
    pass