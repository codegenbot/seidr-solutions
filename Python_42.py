```
def incr_list():
    lst = []
    while True:
        num = input("Enter a number (or 'done' if finished): ")
        if num.lower() == 'done':
            break
        try:
            num = int(num)
        except ValueError:
            print("Invalid input. Please enter an integer.")
            continue
        lst.append(num)
    return sorted(lst)

print(incr_list())