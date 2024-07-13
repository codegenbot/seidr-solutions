```
def intersperse(lst):
    return ' '.join(map(str, lst))

print(intersperse(input("Enter a list of strings (space separated): ").split()))