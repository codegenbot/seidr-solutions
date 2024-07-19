try:
    input_list = list(map(int, input("Enter space-separated integers: ").strip().split()))
    result = sum(input_list)
    print(result)
except ValueError:
    print("Invalid input. Please enter space-separated integers.")
except KeyboardInterrupt:
    print("No input received. Please provide space-separated integers.")