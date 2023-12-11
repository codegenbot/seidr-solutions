def cut_vector(my_list):
    n = len(my_list)
    if n == 1:
        return my_list[0], 0
    left = 0
    right = n - 1
    while left < right:
        if my_list[left] <= my_list[right]:
            left += 1
        else:
            right -= 1
    return my_list[:left], my_list[left:]