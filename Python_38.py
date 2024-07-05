def decode_cyclic(my_list):
    if len(my_list) % 3 != 0:
        my_list = my_list.rjust(len(my_list) + (3 - len(my_list) % 3), " ")
    groups = [my_list[i : i + 3] for i in range(0, len(my_list), 3)]
    decoded_groups = [
        (group[1:] + group[0]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)