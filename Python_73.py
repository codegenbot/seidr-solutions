```
def array_change(lst):
    max_diff = 0
    for i in range(1, len(lst)):
        diff = abs(int(lst[i]) - int(lst[i-1]))
        if diff > max_diff:
            max_diff = diff
    return max_diff

while True:
    try:
        lst = list(map(int, input("Enter a space-separated list of numbers: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter a space-separated list of numbers.")

if len(set(lst)) != len(lst):  
    while True:
        try:
            lst = list(map(int, input("Enter a space-separated list of numbers: ").split()))
            if len(set(lst)) == len(lst):
                break
        except ValueError:
            print("Invalid input. Please enter a space-separated list of numbers.")
    print(array_change(lst))
else:
    print(array_change(lst))