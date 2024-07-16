numbers = []
try:
    while True:
        num = input("Enter a number or type 'stop' to end: ")
        if num.lower() == 'stop':
            break
        if num.lstrip('-').isdigit() or (num[0] == '-' and num[1:].isdigit()):
            numbers.append(int(num))
        else:
            print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    pass