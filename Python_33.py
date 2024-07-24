def sort_third(lst):
    return tuple(sorted(lst, key=lambda x: sum(x)))


n = int(input("Enter number of elements: "))
user_input = [
    list(map(int, input(f"Enter element {i+1} (space separated): ").split()))
    for i in range(n)
]
print(sort_third(tuple(user_input)))