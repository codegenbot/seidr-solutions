```
while True:
    lst = input("Enter a list of numbers separated by spaces: ").split()
    while "" in lst:
        lst.remove("")
    try:
        lst = [int(x) for x in lst]
        break
    except ValueError:
        print("Invalid input. Please enter valid integers.")
print([(x - min(lst)) * 2 + min(lst) for x in lst])