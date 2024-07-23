def check():
    first_list = [1, 2, 3]
    second_list = [4, 5, 6]
    result = double_the_difference(first_list, second_list)
    print(result)


def double_the_difference(first_list, second_list):
    if len(first_list) != len(second_list):
        return "Lists must be of the same length"
    differences = [(a - b) ** 2 for a, b in zip(first_list, second_list)]
    return sum(differences) * 8