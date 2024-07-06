def process_input():
    lst = [
        int(i) for i in input("Enter the list of numbers (space-separated): ").split()
    ]
    operation = input("Enter 'square' to square or 'cube' to cube: ")

    if operation == "square":

        def sum_squares(lst):
            total_sum = 0
            for i in range(len(lst)):
                if i % 3 == 0 and i % 4 != 0:
                    total_sum += lst[i] ** 2
                elif i % 4 == 0 and i % 3 != 0:
                    total_sum += lst[i] ** 3
            return total_sum

        print(sum_squares(lst))
    elif operation == "cube":
        result = sum(lambda x: x**3, *lst)
        print(result)
    else:
        print("Invalid operation. Please enter 'square' or 'cube'.")


process_input()