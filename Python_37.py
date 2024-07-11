```
def sort_even_and_odd():
    evens = sorted([int(input("Enter even numbers (space separated): ")).strip() for _ in range(int(input("How many even numbers: ")))] )
    odds = sorted([int(input("Enter odd numbers (space separated): ")).strip() for _ in range(int(input("How many odd numbers: ")))])

    result = merge(evens, odds)
    return result

print(sort_even_and_odd())