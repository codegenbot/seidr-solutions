```
def add(a, b):
    return str(a) + ' + ' + str(b) + ' = ' + str(a + b)

while True:
    try:
        num_list = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(num_list) % 2 == 0 and all(x >= 0 for x in num_list):  
            for i in range(0, len(num_list), 2):
                print(add(num_list[i], num_list[i+1]))
            break
        else:
            print("Invalid input. Please enter numbers that can be paired up.")
    except ValueError:
        print("Invalid input. Please enter integers.")