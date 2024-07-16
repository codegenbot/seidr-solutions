inputs = []
for _ in range(3):
    while True:
        num = input("Enter a number: ")
        if num.isdigit():
            inputs.append(int(num))
            break
        else:
            print("Please enter a valid number.")