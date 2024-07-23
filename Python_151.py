```
def check():
    first_list = [int(x) for x in input("Enter the first list of numbers (space separated): ").split()]
    second_list = [int(x) for x in input("Enter the second list of numbers (space separated): ").split()]
    if len(first_list) != len(second_list):
        print("Lists must be of the same length")
    else:
        differences = [(a - b)**2 for a, b in zip(first_list, second_list)]
        result = sum(differences) * 8
        print(result)

check()