```
def sort_even():
    num_list = []
    while True:
        try:
            num = int(input("Enter a number (or 'q' to quit): "))
            if num == 'q':
                break
            num_list.append(num)
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return sort_even(num_list)