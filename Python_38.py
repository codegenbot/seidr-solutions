while True:
    try:
        input_list = list(map(int, input("Enter space-separated integers: ").strip().split()))
        result = sum(input_list)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")