def add(a, b):
    return a + b

while True:
    try:
        num_list = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(num_list) == 2 and num_list[0] >= 0 and num_list[1] >= 0:  
            print(add(*num_list))
            break
        else:
            print("Invalid input. Please enter two positive numbers.")
    except ValueError:
        print("Invalid input. Please enter integers separated by space.")