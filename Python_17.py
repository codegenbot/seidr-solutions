try:
    user_input = list(map(int, input("Enter space-separated integers: ").split()))
except ValueError:
    print("Please enter valid space-separated integers.")