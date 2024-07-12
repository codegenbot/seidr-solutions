while True:
    try:
        user_input = [int(i.strip()) for i in input("Enter a list of numbers separated by comma: ").split(",")]
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by commas.")

if not user_input:
    print("No numbers entered.")
elif len(set(map(str, user_input))) != len(user_input):
    print("Please do not repeat the same number.")
print(sorted(user_input))