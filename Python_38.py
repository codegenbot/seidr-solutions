try:
    input_str = input("Enter space-separated integers: ")
    input_list = list(map(int, input_str.split()))
    # Continue with the remaining code
except:
    print("Invalid input. Please enter space-separated integers.")