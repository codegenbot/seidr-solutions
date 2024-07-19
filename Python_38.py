try:
    input_list = list(map(int, input("Enter space-separated integers: ").strip().split()))
    if input_list:
        print(sum(input_list))
    else:
        print("Invalid input. Please enter at least one integer.")
except ValueError:
    print("Invalid input. Please enter space-separated integers.")