```
def check(lst):
    if len(set(lst)) == 1:
        return "All elements are equal"
    elif len(lst) == len(set(lst)):
        return "All elements are unique"
    else:
        return "Some elements are equal and some are not"

while True:
    try:
        lst = list(map(int, input().split()))
        if len(lst) == 0: 
            print("Please enter some numbers.")
        else: 
            break
    except ValueError:
        print("Invalid input. Please enter integers separated by space.")

print(check(lst))