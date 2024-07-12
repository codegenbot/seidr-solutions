def total_match(lst1, lst2):
    sum1 = sum(len(s) for s in lst1)
    sum2 = sum(len(s) for s in lst2)

    if set(map(len, lst1)) < set(map(len, lst2)):
        return lst1
    elif set(map(len, lst1)) > set(map(len, lst2)):
        return lst2
    else:
        if sum1 >= sum2:
            return lst1
        else:
            return lst2


lst1 = []
while True:
    try:
        lst1 = [
            s.strip()
            for s in input("Enter the first list of strings (comma-separated): ").split(
                ","
            )
        ]
        if not all(isinstance(s, str) for s in lst1):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated string values.")

lst2 = []
while True:
    try:
        lst2 = [
            s.strip()
            for s in input(
                "Enter the second list of strings (comma-separated): "
            ).split(",")
        ]
        if not all(isinstance(s, str) for s in lst2):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated string values.")

print(total_match(lst1, lst2))