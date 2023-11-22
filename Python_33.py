def sort_third(l: list):
    non_divisible_by_three = [l[i] for i in range(len(l)) if i % 3 != 0]
    divisible_by_three = sorted([l[i] for i in range(len(l)) if i % 3 == 0])
    sorted_list = []
    j = 0
    for i in range(len(l)):
        if i % 3 != 0:
            sorted_list.append(non_divisible_by_three[j])
            j += 1
        else:
            sorted_list.append(divisible_by_three[i // 3])
    return sorted_list