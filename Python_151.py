def double_the_difference(list1, list2):
    if len(list1) == len(list2):
        return (max(list1) - min(list1)) * 2
    elif max(list1) > max(list2):
        return (max(list1) - min(list1)) * 2
    else:
        return (max(list2) - min(list2)) * 2


print(double_the_difference(first_list, second_list))