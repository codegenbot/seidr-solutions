```
def sorted_list_sum(lst):
    while True:
        try:
            if all(i.isnumeric() for i in lst):
                return sum(sorted(map(int, lst)))
            else:
                print("Invalid input. Please enter a list of numbers.")
        except ValueError:
            print("Invalid input. Please enter a list of numbers.")