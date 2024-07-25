while True:
    try:
        user_input = list(map(int, input("Enter 5 space-separated integers separated by a single space: ").split()))
        if len(user_input) != 5:
            print("Please enter exactly 5 space-separated integers.")
        else:
            break
    except ValueError:
        print("Please enter valid space-separated integers")

user_input.sort()
print(" ".join(map(str, user_input)) )