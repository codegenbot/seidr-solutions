```
def add(x: int, y: int):
    return x + y

while True:
    try:
        print("Enter two whole numbers:")
        x = int(input("First number: "))
        if -2**31 <= x <= 2**31 -1:
            y = int(input("Second number: "))
            if -2**31 <= y <= 2**31 -1:
                print(f"The sum is {x + y}")
                break
        else:
            print("Invalid input. Please enter whole numbers within the range (-2,147,483,648 to 2,147,483,647).")
    except ValueError:
        print("Invalid input. Please enter whole numbers.")