```
def array_change(lst):
    lst = [int(i) for i in lst]
    if len(set(lst)) == 1:
        return "All elements are the same"
    elif max(lst) - min(lst) <= 1:
        return "The difference between the maximum and minimum values is 1 or less"
    else:
        return "Neither condition is met"

print(array_change(input("Enter a space-separated list of numbers: ").split()))