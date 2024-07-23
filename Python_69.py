```
def search(lst):
    pos_count = 0
    for num in lst:
        if num > 0:
            pos_count += 1
    return pos_count / len(lst) if len(lst) > 0 else 0

lst = input("Enter numbers separated by space: ")
try:
    lst = [int(i) for i in lst.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()

print(search(lst))