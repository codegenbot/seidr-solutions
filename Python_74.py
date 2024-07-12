```
def total_match(lst1, lst2):
    return lst1 if sum(len(s) for s in lst1) <= sum(len(s) for s in lst2) else lst2

lst1 = []
while True:
    try:
        temp = [s.strip() for s in input("Enter the first list of strings (comma-separated): ").split(",")]
        if 'quit' in temp.lower() or 'q' in temp.lower():
            break
        if not all(isinstance(s, str) for s in temp):
            raise ValueError
        lst1 = temp
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated string values.")

lst2 = []
while True:
    try:
        temp = [s.strip() for s in input("Enter the second list of strings (comma-separated): ").split(",")]
        if 'quit' in temp.lower() or 'q' in temp.lower():
            break
        if not all(isinstance(s, str) for s in temp):
            raise ValueError
        lst2 = temp
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated string values.")

print(total_match(lst1, lst2))