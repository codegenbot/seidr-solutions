try:
    user_input = list(map(int, input("Enter space-separated integers: ").strip().split()))
except ValueError:
    print("Invalid input. Please enter space-separated integers only.")