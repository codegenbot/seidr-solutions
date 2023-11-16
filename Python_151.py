def double_the_difference(number_list):
    list_length = len(number_list)
    even_numbers = []
    odd_numbers = []
    for item in number_list:
        even_numbers.append(item * 2)
        if item % 2 == 0:
            even_numbers.append(item)

    for item in number_list:
        if item % 2 == 1:
            odd_numbers.append(item)
        else:
            pass

    square_odd_numbers = []

    for i in range(len(odd_numbers)):
        item =  odd_numbers[i]**2
        square_odd_numbers.append(item)

    tl = 0

    for i in range(len(square_odd_numbers)):
        item = square_odd_numbers[i]
        tl = tl + item
    return tl
