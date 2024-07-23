```
def sort_third():
    lst = []
    while True:
        num = input("Enter a number (or 'q' to quit): ")
        if num.lower() == 'q':
            break
        try:
            num = int(num)
            lst.append(num)
        except ValueError:
            print("Invalid input. Please enter an integer or 'q' to quit.")
    third = sorted([i for i in lst if i % 3 == 0])
    first = sorted([i for i in lst if i % 3 != 0])
    return sorted(first + third)

print(sort_third())