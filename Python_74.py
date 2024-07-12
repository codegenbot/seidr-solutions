```
def total_match(lst1, lst2):
    return lst1 if sum(len(s) for s in lst1) <= sum(len(s) for s in lst2) else lst2

while True:
    try:
        n1 = int(input("Enter the number of strings in the first list: "))
        lst1 = [s.strip() for s in input(f"Enter {n1} string values (comma-separated): ").split(",")]
        if not all(isinstance(s, str) for s in lst1):
            raise ValueError
        n2 = int(input("Enter the number of strings in the second list: "))
        lst2 = [s.strip() for s in input(f"Enter {n2} string values (comma-separated): ").split(",")]
        if not all(isinstance(s, str) for s in lst2):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated string values.")

print(total_match(lst1, lst2))