def solution():
    n = int(input("Enter number of elements: "))
    input_list = []

    for i in range(n):
        element = input(f"Enter element {i+1}: ")
        input_list.append(element)

    return input_list