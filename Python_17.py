while True:
    try:
        inputs = list(map(int, input("Enter space-separated integers: ").strip().split()))
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")