```
while True:
    try:
        lst = [
            int(x)
            for x in input("Enter the array (space separated numbers): ").split()
        ]
        if len(lst) < 2:
            print("Please provide at least two numbers.")
        else:
            max_diff = 0
            for i in range(1, len(lst)):
                diff = abs(int(lst[i]) - int(lst[i-1]))
                if diff > max_diff:
                    max_diff = diff
            print(max_diff)
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")