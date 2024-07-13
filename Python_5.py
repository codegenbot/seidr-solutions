```Python
def intersperse(lst):
    result = [lst[0]]
    for i in range(1, len(lst)):
        result.append(' ' + lst[i])
    if len(lst) > 1:
        result.append(' ')
    return ''.join(result)

print(intersperse(input("Enter a list of strings (space separated): ").split()))