```
while True:
    try:
        user_input = [int(i.strip()) for i in input("Enter a list of numbers separated by comma: ").split(",")]
        if len(set(user_input)) != len(user_input):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter unique numbers separated by commas.")

print(sorted(user_input))