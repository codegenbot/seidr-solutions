try:
    user_input = list(map(int, input("Enter space-separated integers: ").split()))
except ValueError:
    print("Please enter valid space-separated integers.")

if len(user_input) != 5:
    print("Please enter exactly 5 space-separated integers.")
else:
    user_input.sort()
    print("Sorted integers:", user_input)