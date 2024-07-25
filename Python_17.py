user_input = input("Enter space-separated integers: ").strip().split()

if len(user_input) != 5 or any(not num.isdigit() for num in user_input):
    print("Please enter exactly 5 valid space-separated integers.")
else:
    user_input = list(map(int, user_input))
    user_input.sort()
    print("Sorted integers:", user_input)