```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        if x < -2**31 or x > 2**31 -1:
            print("Invalid input. Please enter a whole number within the range (-2,147,483,648 to 2,147,483,647).")
            continue
        y = int(input("Enter the second number: "))
        if y < -2**31 or y > 2**31 -1:
            print("Invalid input. Please enter a whole number within the range (-2,147,483,648 to 2,147,483,647).")
            continue
        print(f"The sum is {add(x, y)}")
        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")