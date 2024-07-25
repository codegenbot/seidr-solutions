try:
    user_input = list(map(int, input("Enter space-separated numbers: ").strip().split()))
except ValueError:
    print("Invalid input. Please enter space-separated numbers only.")