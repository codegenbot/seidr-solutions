while True:
    try:
        user_input = list(map(int, input("Enter 5 space-separated integers: ").split()))
        if len(user_input) == 5:
            break
        print("Please enter exactly 5 space-separated integers.")
    except ValueError:
        print("Please enter valid space-separated integers.")

user_input.sort()
print("Sorted integers:", user_input)