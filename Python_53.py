```
def add(a, b):
    return a + b

while True:
    try:
        num_list = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(num_list) == 2 and all(x >= 0 for x in num_list):  
            print(add(*num_list))
            break
        else:
            print("Invalid input. Please enter exactly two positive numbers.")
    except ValueError:
        print("Invalid input. Please enter integers.")