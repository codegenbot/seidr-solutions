user_input = list(map(int, input("Enter 10 integers separated by space: ").strip().split()))
if len(user_input) != 10:
    print("Please enter exactly 10 integers separated by space.")
else:
    user_input.sort()
    print(*user_input[:5])