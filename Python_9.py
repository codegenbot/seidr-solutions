numbers = []
while True:
    num = input("Enter a number or type 'stop' to end: ").strip()
    if num == "stop":
        break
    if not num.isdigit():
        print("Invalid input. Please enter a valid number.")
        continue
    numbers.append(int(num))