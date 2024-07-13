```
def intersperse(lst):
    return ''.join([item for pair in zip([lst[0]], lst, [lst[-1]]) for item in pair])

input_list = [x.strip() for x in input("Enter a list of strings (space separated): ").split()]
print(intersperse(input_list))