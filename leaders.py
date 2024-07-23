```
def leaders(arr):
    result = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        four_spaces_before_each_line_of_code_inside_the_for_loop
        if arr[i] >= result[0]:
            result.insert(0, arr[i])
    return result