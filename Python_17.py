while True:
    try:
        user_input = list(map(int, input("Enter 5 integers separated by a single space: ").split()))
        if len(user_input) == 5:
            break
        print("Please enter exactly 5 integers.")
    except ValueError:
        print("Please enter valid integers.")

user_input.sort()
print("Sorted integers:", user_input)