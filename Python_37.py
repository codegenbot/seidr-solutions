```
def sort_even():
    num_list = []
    while True:
        try:
            num = int(input("Enter a number (or 'done' to finish): "))
            if num == 'done':
                break
            num_list.append(num)
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return sort_even([x for x in num_list if x % 2 == 0])