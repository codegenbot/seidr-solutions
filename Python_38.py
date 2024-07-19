while True:
    try:
        input_list = list(map(int, input("Enter space-separated integers: ").strip().split()))
        if input_list:
            result = sum(input_list)
            print(result)
            break
        else:
            print("Invalid input. Please enter at least one integer.")
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")