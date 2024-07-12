```
user_input = input("Enter a list of numbers separated by comma: ")
if not user_input:
    print("No input provided.")
else:
    user_input = [int(i) for i in user_input.split(",")]
    print(sort_third(user_input))