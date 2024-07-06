def digit_sum():
    n = int(input("Enter a number: "))
    return sum(int(i) for i in str(n))

while True:
    try:
        print(digit_sum())
        break
    except (ValueError, EOFError):
        print("Invalid input. Please enter an integer.")