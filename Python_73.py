```Python
def smallest_change():
    while True:
        try:
            lst = [int(x) for x in input("Enter the array (space separated numbers): ").split()]
            break
        except ValueError:
            print("Invalid input. Please enter space-separated integers.")

    if len(lst) < 2:
        print("Please provide at least two numbers.")
        cont = input("Do you want to continue? (yes/no): ")
        if cont.lower() != "yes":
            return

    max_diff = 0
    for i in range(1, len(lst)):
        diff = abs(int(lst[i]) - int(lst[i-1]))
        if diff > max_diff:
            max_diff = diff

    print("The smallest change is:", max_diff)
    cont = input("Do you want to continue? (yes/no): ")
    if cont.lower() != "yes":
        return


smain = True
while smain:
    smallest_change()
    cont = input("Do you want to continue? (yes/no): ")
    if cont.lower() != "yes":
        smain = False